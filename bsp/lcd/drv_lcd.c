/*TP79��lcd����оƬΪILI9163��398��lcd����ST7735
 *
 *
 *
 */

#define DRV_LCD_ENABLE
#include "drv_lcd.h"


#define	LCD_SEND_DAT8(x)	LCD_DATA_GPIO_Port->ODR=(LCD_DATA_GPIO_Port->ODR&0x00ff)|(((x)<<8)&0xff00)


static void drv_lcd_set_display_range(u16 x,u16 y,u16 width,u16 height);

static void lcd_cs_control(on_off_t states);
static void lcd_wr_control(on_off_t states);
static void lcd_rd_control(on_off_t states);
static void lcd_rs_control(on_off_t states);
static void lcd_rst_control(on_off_t states);

static void lcd_delay_ms(u32 ms);
static void lcd_reset(void);
static void lcd_write_cmd8(u8 cmd);
static void lcd_write_dat8(u8 cmd);
static void lcd_write_dat16(u16 Data);

static void lcd_cs_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_CS_GPIO_Port,LCD_CS_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_CS_GPIO_Port,LCD_CS_Pin,GPIO_PIN_RESET);
}

static void lcd_wr_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_WR_GPIO_Port,LCD_WR_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_WR_GPIO_Port,LCD_WR_Pin,GPIO_PIN_RESET);
}

static void lcd_rd_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_RD_GPIO_Port,LCD_RD_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_RD_GPIO_Port,LCD_RD_Pin,GPIO_PIN_RESET);
}

static void lcd_rs_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_RS_GPIO_Port,LCD_RS_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_RS_GPIO_Port,LCD_RS_Pin,GPIO_PIN_RESET);
}

static void lcd_rst_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_RST_GPIO_Port,LCD_RST_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_RST_GPIO_Port,LCD_RST_Pin,GPIO_PIN_RESET);
}

static void lcd_delay_ms(u32 ms)
{
  u32 i,j;
  for(j=0; j<ms; j++)
  {
    for(i=0; i<8000; i++); //for 8M
  }
}

static void lcd_reset(void)
{
	lcd_rst_control(ON);
	lcd_delay_ms(1);
	lcd_rst_control(OFF);
	lcd_delay_ms(10);
	lcd_rst_control(ON);
	lcd_delay_ms(100);
}

/* 8080ʱ�� */
static void lcd_write_cmd8(u8 cmd) 
{
	lcd_rd_control(ON);//��ֹ��
	lcd_cs_control(OFF);//ʹ��
	lcd_rs_control(OFF);//д����
	lcd_wr_control(OFF);//дʱ��
	LCD_SEND_DAT8(cmd);  //��������
	lcd_wr_control(ON);
	lcd_cs_control(ON);
}

/* 8080ʱ�� */
static void lcd_write_dat8(u8 cmd) 
{
	lcd_rd_control(ON);//��ֹ��
	lcd_cs_control(OFF);//ʹ��
	lcd_rs_control(ON);//д����
	LCD_SEND_DAT8(cmd);  //��������
	lcd_wr_control(OFF);
	lcd_wr_control(ON);
	lcd_cs_control(ON);
}

static void lcd_write_dat16(u16 Data)
{
	lcd_rd_control(ON);//��ֹ��
	lcd_cs_control(OFF);  //ʹ��
	lcd_rs_control(ON); //д����
	LCD_SEND_DAT8((Data>>8) & 0x00ff);  //�������ݸ�8λ
	lcd_wr_control(OFF);     //дʱ��
	lcd_wr_control(ON); 	
	LCD_SEND_DAT8(Data & 0x00ff);  //�������ݵ�8λ	
	lcd_wr_control(OFF);     //дʱ��
	lcd_wr_control(ON); 		
	lcd_cs_control(ON); 	
}

/* lcd����ƿ��� */
void drv_lcd_backlight_control(on_off_t states)
{
	if(states==ON)
		HAL_GPIO_WritePin(LCD_BL_GPIO_Port,LCD_BL_Pin,GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(LCD_BL_GPIO_Port,LCD_BL_Pin,GPIO_PIN_RESET);
}

/* ��ʼ��lcd�Ĳ��� */
void drv_lcd_init(void)
{
	lcd_reset();

	/* Start Initial Sequence */
	lcd_write_cmd8(0x11);//Exit Sleep
	lcd_delay_ms(120);
	lcd_write_cmd8(0xB1);//����ģʽ/ȫ������֡����
	lcd_write_dat8(0x05); 
	lcd_write_dat8(0x3C); 
	lcd_write_dat8(0x3C);
	
	lcd_write_cmd8(0xB4);//���Կ���
	lcd_write_dat8(0x00);
	
	/* ST7735S PowerSequence */
	lcd_write_cmd8(0xC0); 
	lcd_write_dat8(0x28); 
	lcd_write_dat8(0x08); 
	lcd_write_dat8(0x04); 

	lcd_write_cmd8(0xC1); 
	lcd_write_dat8(0XC0); 

	lcd_write_cmd8(0xC2); 
	lcd_write_dat8(0x0D); 
	lcd_write_dat8(0x00); 

	lcd_write_cmd8(0xC3); 
	lcd_write_dat8(0x8D); 
	lcd_write_dat8(0x2A); 

	lcd_write_cmd8(0xC4); 
	lcd_write_dat8(0x8D); 
	lcd_write_dat8(0xEE); 
	/* End ST7735S Power Sequence */

	lcd_write_cmd8(0xC5); //VCOM ��ѹ����
	lcd_write_dat8(0x1A); 

	/* ��Ļ��˸���� */
	lcd_write_cmd8(0xC7);
	lcd_write_dat8(0xB6);

	lcd_write_cmd8(0x3a);//Set Color Format  65K ��RGB565  ��2��16�η�
	lcd_write_dat8(0x05);

	lcd_write_cmd8(0x2A);//Set Column Address ������ʼ���غͽ������� 160-1
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x9F);

	lcd_write_cmd8(0x2B); //Set Page Address ������ʼ���غͽ������� 128-1
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x00);
	lcd_write_dat8(0x7F);

	lcd_write_cmd8(0x36); //Set Scanning Direction --MX, MY,(ˮƽ����ֱɨ��˳��)  �� RGB mode (RGB or BGR)
	lcd_write_dat8(0x60);

	/* ST7735S GammaSequence */
	lcd_write_cmd8(0xE0); 
	lcd_write_dat8(0x04); 
	lcd_write_dat8(0x22); 
	lcd_write_dat8(0x07); 
	lcd_write_dat8(0x0A); 
	lcd_write_dat8(0x2E); 
	lcd_write_dat8(0x30); 
	lcd_write_dat8(0x25); 
	lcd_write_dat8(0x2A); 
	lcd_write_dat8(0x28); 
	lcd_write_dat8(0x26); 
	lcd_write_dat8(0x2E); 
	lcd_write_dat8(0x3A); 
	lcd_write_dat8(0x00); 

	lcd_write_dat8(0x01); 
	lcd_write_dat8(0x03); 
	lcd_write_dat8(0x13); 

	lcd_write_cmd8(0xE1); 
	lcd_write_dat8(0x04); 
	lcd_write_dat8(0x16); 
	lcd_write_dat8(0x06); 
	lcd_write_dat8(0x0D); 
	lcd_write_dat8(0x2D); 
	lcd_write_dat8(0x26); 
	lcd_write_dat8(0x23); 
	lcd_write_dat8(0x27); 
	lcd_write_dat8(0x27); 
	lcd_write_dat8(0x25); 
	lcd_write_dat8(0x2D); 
	lcd_write_dat8(0x3B); 
	lcd_write_dat8(0x00); 
	lcd_write_dat8(0x01); 
	lcd_write_dat8(0x04); 
	lcd_write_dat8(0x13); 
	/* End ST7735S Gamma Sequence */

	lcd_delay_ms(200);
	lcd_write_cmd8(0x29); // Display On
}

void drv_lcd_display_control(on_off_t states)
{
	if(states==ON)
		lcd_write_cmd8(0x29); //Display On
	else
		lcd_write_cmd8(0x28); //Display Off
}

void drv_lcd_sleep_in(void)
{
	lcd_write_cmd8(0x10); //Sleep in
	lcd_delay_ms(120);
}

void drv_lcd_sleep_out(void)
{
	lcd_write_cmd8(0x11);	 //Sleep out
	lcd_delay_ms(120);
}

static void drv_lcd_set_display_range(u16 x,u16 y,u16 width,u16 height)
{
	lcd_write_cmd8(0x2a);    //����X��ַ�Ŀ�ʼ������λ��
	lcd_write_dat8(x/256);
	lcd_write_dat8(x%256);
	lcd_write_dat8((x+width)/256);	
	lcd_write_dat8((x+width)%256);  
	
	lcd_write_cmd8(0x2b);    //����Y��ַ�Ŀ�ʼ������λ��
	lcd_write_dat8(y/256);
	lcd_write_dat8(y%256);
	lcd_write_dat8((y+height)/256);	
	lcd_write_dat8((y+height)%256);  
}

/*���õ�ɫ*/
void drv_lcd_color_clear(u8 x,u8 y, u16 colorData, u8 width, u8 height)
{
	int i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//���¿�ʼ���ݴ���
	for(i=0;i<height;i++)
	{
		for(j = 0; j < width; j++)
		{
			lcd_write_dat16(colorData);
		}
	}
}

#if 1 //��ʾ�����е�ͼƬ 
void drv_lcd_display_bmp(u8 x,u8 y,const u16 *bmp,u8 width, u8 height)
{
  u8 i,j;
  u16 temp;
  drv_lcd_set_display_range(x,y,width-1,height-1);
  lcd_write_dat8(0x2c);  	//���¿�ʼ���ݴ���

  for(i=0; i<height; i++)
  {
    for(j = 0; j < width; j++)
    {
      temp = *(bmp+(height-i-1)*width+j);
      temp = (temp >> 8) + (temp << 8);
      lcd_write_dat16(temp);
    }
  }
}

/*��ʾͼƬ������͸������*/
void drv_lcd_display_bmp_with_empty_background(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 back_color)
{
	u8 i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//���¿�ʼ���ݴ���
	
	for(i=0;i<height;i++)
	{			
		for(j = 0; j < width; j++)
		{
			if(*(bmp) == 0xff && *(bmp+1) == 0xff)
			{
				bmp++;
				lcd_write_dat8(back_color>>8); 
				bmp++;
				lcd_write_dat8(back_color);  				
			}
			else
			{
				lcd_write_dat8(*(bmp++)); 
				lcd_write_dat8(*(bmp++));  
			}
		}
	}		
}
#else //��ʾbin�ļ��е�ͼƬ
void drv_lcd_display_bmp(u8 x,u8 y,const u8 *bmp,u8 width, u8 height)
{
	u8 i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//���¿�ʼ���ݴ���
	
	for(i=0;i<height;i++)
	{			
		for(j = 0; j < width; j++)
		{
			lcd_rd_control(ON);  //��ֹ��
			lcd_cs_control(OFF);  //ʹ��
			lcd_rs_control(ON); //д����
			LCD_SEND_DAT8(*(bmp++));  //�������ݸ�8λ
			lcd_wr_control(OFF);     //дʱ��
			lcd_wr_control(ON); 	
			LCD_SEND_DAT8(*(bmp++));  //�������ݵ�8λ	
			lcd_wr_control(OFF);     //дʱ��
			lcd_wr_control(ON); 		
			lcd_cs_control(ON); 
		}
	}
}
#endif

