#define DRV_FONT_ENABLE

#include "drv_font.h"
#include "string.h"

#define ADDR_BASE_15X16   0
#define ADDR_BASE_11X16   0X3CF80
#define ADDR_ASCII_8X16   0X3B7C0
#define ADDR_ASCII_8X12		0x66D40
#define ADDR_ASCII_5X7		0x3BFC0

#define ADDR_UNICODE_TO_GB2312	0x67D70
#define ADDR_GB2312_TO_UNICODE	0x2F00

static void font_cs_control(on_off_t states);
static void font_sclk_control(on_off_t states);
static void font_mosi_control(on_off_t states);
static GPIO_PinState read_font_miso_states(void);

static void read_font_addr(u32 addr, u8 * dat, u8 datlen);

static void font_cs_control(on_off_t states)
{
  if(states==ON)
    HAL_GPIO_WritePin(FONT_SPI_CS_GPIO_Port,FONT_SPI_CS_Pin,GPIO_PIN_SET);
  else
    HAL_GPIO_WritePin(FONT_SPI_CS_GPIO_Port,FONT_SPI_CS_Pin,GPIO_PIN_RESET);
}

static void font_sclk_control(on_off_t states)
{
  if(states==ON)
    HAL_GPIO_WritePin(FONT_SPI_SCLK_GPIO_Port,FONT_SPI_SCLK_Pin,GPIO_PIN_SET);
  else
    HAL_GPIO_WritePin(FONT_SPI_SCLK_GPIO_Port,FONT_SPI_SCLK_Pin,GPIO_PIN_RESET);
}

static void font_mosi_control(on_off_t states)
{
  if(states==ON)
    HAL_GPIO_WritePin(FONT_SPI_MOSI_GPIO_Port,FONT_SPI_MOSI_Pin,GPIO_PIN_SET);
  else
    HAL_GPIO_WritePin(FONT_SPI_MOSI_GPIO_Port,FONT_SPI_MOSI_Pin,GPIO_PIN_RESET);
}

static GPIO_PinState read_font_miso_states(void)
{
  return HAL_GPIO_ReadPin(FONT_SPI_MISO_GPIO_Port,FONT_SPI_MISO_Pin);
}

void drv_font_init(void)
{
  gb2312_to_unicode(0xe2b2);
}

/*
 *��ȡGT21L16S����
 *addr& 00ffffff  3��byte
 *datlen ��ȡ����
 *��ȡʱ��Ϊ ���ֽ� 03��ͨ��ȡ���������ֽ�Ϊ��ַ
 */
static void read_font_addr(u32 addr, u8 * dat, u8 datlen)
{
  u8 i,j;
  addr &= 0x00ffffff;
  addr |= 0x03000000;
  memset(dat, 0, datlen);
  font_cs_control(OFF);;

  for(i=0; i<32; i++)//����bit����
  {
    if(addr & (0x80000000 >> i))
      font_mosi_control(ON);
    else
      font_mosi_control(OFF);
    font_sclk_control(OFF);
    font_sclk_control(ON); //scl���������ݱ�GT21L����
  }
  //��ʼ�����ݣ� scl�½��ر��Ƴ�
  for(i=0; i<datlen; i++)
  {
    for(j=0; j<8; j++)
    {
      font_sclk_control(ON);
      font_sclk_control(OFF);
      if(read_font_miso_states())
        *(dat+i) = *(dat+i) | (0x01<<(7-j));
      else
        *(dat+i) =  *(dat+i) & ~(0x01<<(7-j));
    }
  }
  font_cs_control(ON);
}

/*����һ��GB2312���֣����15*16��������*/
u8 drv_get_gb2312_pixel_data_15x16(u8 *out_dat, u8* dat_gb2312)
{
  u32 addr;
  u8 MSB, LSB;
  MSB = *(u8*)dat_gb2312;
  LSB = *(u8*)(dat_gb2312+1);
  if(MSB>=0XA4 && MSB<=0XA8 && LSB>=0XA1)
    addr = ADDR_BASE_15X16;
  else if(MSB>=0XA1 && MSB<=0XA9 && LSB>=0XA1)
    addr = ((MSB - 0xa1)*94 + (LSB-0XA1))*32 + ADDR_BASE_15X16;
  else if(MSB >= 0XB0 && MSB<=0XF7 && LSB>=0XA1)
    addr = ((MSB-0XB0)*94 + (LSB - 0XA1)+846)*32 + ADDR_BASE_15X16;
  else
  {
    if(drv_get_ascii_pixel_data_8x16(out_dat, * dat_gb2312))
    {
      if(drv_get_ascii_pixel_data_8x16(out_dat+16, * (dat_gb2312+1)))
        return 1;
    }
    else
      return 0;
  }
  read_font_addr(addr, out_dat, 32);
  return 1;
}

/*����һ��GB2312���֣����11x12��������*/
u8 drv_get_gb2312_pixel_data_11x12(u8 *out_dat, u8* dat_gb2312)
{
  u32 addr;
  u8 MSB, LSB;
  MSB = *(u8*)dat_gb2312;
  LSB = *(u8*)(dat_gb2312+1);
  if(MSB>=0XA1 && MSB<=0XA3 && LSB>=0XA1)
    addr = ((MSB - 0xa1)*94 + (LSB-0XA1))*24 + ADDR_BASE_11X16;
  else if(MSB==0XA9 && LSB>=0XA1)
    addr = (282+(LSB - 0XA1))*24 + ADDR_BASE_11X16;
  else if(MSB >= 0XB0 && MSB<=0XF7 && LSB>=0XA1)
    addr = ((MSB-0XB0)*94 + (LSB - 0XA1)+376)*24 + ADDR_BASE_11X16;
  else
  {
    if(drv_get_ascii_pixel_data_8x16(out_dat, * dat_gb2312))
    {
      if(drv_get_ascii_pixel_data_8x16(out_dat+16, * (dat_gb2312+1)))
        return 1;
    }
    else
      return 0;
  }
  read_font_addr(addr, out_dat, 24);
  return 1;
}

/* ����ascii�룬����8*16������Ϣ */
u8 drv_get_ascii_pixel_data_8x16(u8 *out_dat, u8 ascii)
{
  u32 addr;

  if(ascii >= 0x20 && ascii <= 0x7E)
    addr = (ascii - 0X20)*16 +ADDR_ASCII_8X16;
  else
    return 0;
  read_font_addr(addr, out_dat, 16);
  return 1;
}

/* ����ascii�룬����6*12������Ϣ */
u8 drv_get_ascii_pixel_data_6x12(u8 *out_dat, u8 ascii)
{
  u32 addr;

  if(ascii >= 0x20 && ascii <= 0x7E)
    addr = (ascii - 0X20)*12+ADDR_ASCII_8X12;
  else
    return 0;
  read_font_addr(addr, out_dat, 12);
  return 1;
}

/* ����ascii�룬����5*7������Ϣ */
u8 drv_get_ascii_pixel_data_5x7(u8 *out_dat, u8 ascii)
{
  u32 addr;

  if(ascii >= 0x20 && ascii <= 0x7E)
    addr = (ascii - 0X20)*8 +ADDR_ASCII_5X7;
  else
    return 0;
  read_font_addr(addr, out_dat, 8);
  return 1;
}

u16 unicode_to_gb2312(u16 UCSData)
{

  u8 result = 0;
  u16 gbcode;
  int h;
  if(UCSData<0xa0) result=1;
  else if(UCSData<=0xf7) h=UCSData-160;	// 160
  else if(UCSData<0x2c7) result=1;
  else if(UCSData<=0x2c9) h=UCSData-160-463;	//623
  else if(UCSData<0x2010) result=1;
  else if(UCSData<=0x2312) h=UCSData-160-463-7494;	//8117
  else if(UCSData<0x2460) result=1;
  else if(UCSData<=0x2642) h=UCSData-160-463-7494-333;	//8450
  else if(UCSData<0x3000) result=1;
  else if(UCSData<=0x3017) h=UCSData-160-463-7494-333-2493;	//10943
  else if(UCSData<0x3220) result=1;
  else if(UCSData<=0x3229) h=UCSData-160-463-7494-333-2493-520;	//11463
  else if(UCSData<0x4e00) result=1;
  else if(UCSData<=0x9b54) h=UCSData-160-463-7494-333-2493-520-7126;	//18589
  else if(UCSData<0x9c7c) result=1;
  else if(UCSData<=0x9ce2) h=UCSData-160-463-7494-333-2493-520-7126-295;	//18884
  else if(UCSData<0x9e1f) result=1;
  else if(UCSData<=0x9fa0) h=UCSData-160-463-7494-333-2493-520-7126-295-316;	//19200
  else if(UCSData<0xe76c) result=1;
  else if(UCSData<=0xe774) h=UCSData-160-463-7494-333-2493-520-7126-295-316-18379;	//37579
  else if(UCSData<0xff00) result=1;
  else if(UCSData<=0xff5f) h=UCSData-160-463-7494-333-2493-520-7126-295-316-18379-6027;	//43606
  else if(UCSData<0xffe0) result=1;
  else if(UCSData<=0xffe5) h=UCSData-160-463-7494-333-2493-520-7126-295-316-18379-6027-128;	//43734
  else result=1;

  if(result==0)
  {
    read_font_addr((u32)ADDR_UNICODE_TO_GB2312 + (h<<1),(u8*)&gbcode,2);
    gbcode = (gbcode>>8)+(gbcode<<8);
  }
  else
  {
    gbcode = 0x0000;
  }
  //ת����С��ģʽ
  result = (gbcode>>8)&0xff;
  gbcode = ((gbcode<<8)&0xff00) | result;
  return gbcode;

}

u16 gb2312_to_unicode(u16 GBData)
{
  u8 codeH= 0;
  u8 codeL= 0;
  u32 index;
  u16 ucode;
  codeH = GBData >> 8;  //����С��ģʽ
  codeL = GBData & 0x00ff;
  if((codeH>=0xA1) && (codeH<=0xa3) && (codeL >=0xA1))
  {
    index=(codeH - 0xA1) * 94 + (codeL - 0xA1);
  }
  else if((codeH==0xA9) && (codeL >=0xA1) && (codeL<=0xf6))
  {
    index = 282 + (codeL - 0xA1);
  }
  else if((codeH>=0xb0) && (codeH<=0xf7) && (codeL >=0xA1))
  {
    index = (codeH - 0xB0) * 94 + (codeL - 0xA1)+ 368;
  }
  else
  {
    index=0;
  }
  read_font_addr((u32)ADDR_GB2312_TO_UNICODE + (index<<1),(u8*)&ucode,2);
  ucode = (ucode>>8)+(ucode<<8);
  return ucode;
}
