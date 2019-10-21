#define APP_FONT_ENABLE
#include "app_font.h"
#include "drv_font.h"
#include "string.h"
#include "app_lcd.h"

/*
 *显示15*16中英文(单行显示，超出则丢弃)
 *输入x,y,坐标，中文2302，背景色，文字颜色
 */
void ui_display_chinese_15x16(uint16_t x,uint16_t y, char *gb2312_dat, uint16_t black_color, uint16_t text_color)
{
  uint16_t i,j,lenth;
	uint8_t disp_buf[32] = {0};
	lenth = strlen(gb2312_dat);
	for(i=0; i<lenth; i++)
	{
		if(gb2312_dat[i] >= 0x20 && gb2312_dat[i] <= 0x7e)
		{
			drv_get_ascii_pixel_data_8x16(disp_buf,*(gb2312_dat+i));
			//把最下面的三行空白点移到上面去
			for(j=0;j<8;j++)
			{
				disp_buf[j+8] <<= 3 ;
				disp_buf[j+8] |= ((disp_buf[j]>>5) & 0x07);					
				disp_buf[j] = ((disp_buf[j]<<3)&0xF8);
			}
			lcd_display_font_data(x+i*8,y,disp_buf,8,8,text_color,black_color);			
			lcd_display_font_data(x+i*8,y+8,&disp_buf[8],8,8,text_color,black_color);			
		}			
		else
		{
			if(drv_get_gb2312_pixel_data_15x16(disp_buf,( uint8_t*)(gb2312_dat+i)))	
			{
				lcd_display_font_data(x+i*8,y,disp_buf,16,8,text_color,black_color);			
				lcd_display_font_data(x+i*8,y+8,&disp_buf[16],16,8,text_color,black_color);	
			  i++;
			}
			else//出错了，找不到字库
			{
				//if(gb2312_dat[i])
			}
		}			
	}
}

/*
 *显示11*12中英文(单行显示，超出则丢弃)
 *输入x,y,坐标，中文2302，背景色，文字颜色
 */
void ui_display_chinese_11x12(uint16_t x,uint16_t y, char *gb2312_dat, uint16_t black_color, uint16_t text_color)
{
  uint16_t i,lenth;
	uint16_t uin_dat16=0;
	uint8_t disp_buf[32] = {0};
	lenth = strlen(gb2312_dat);
	for(i=0; i<lenth; i++)
	{
		if(gb2312_dat[i] >= 0x20 && gb2312_dat[i] <= 0x7e)
		{
			drv_get_ascii_pixel_data_6x12(disp_buf,*(gb2312_dat+i));
			lcd_display_font_data(x+i*6,y,disp_buf,6,8,text_color,black_color);			
			lcd_display_font_data(x+i*6,y+8,&disp_buf[6],6,5,text_color,black_color);				
		}
		else
		{
			if(drv_get_gb2312_pixel_data_11x12(disp_buf,( uint8_t*)(gb2312_dat+i)))	
			{
				lcd_display_font_data(x+i*6,y,disp_buf,12,8,text_color,black_color);			
				lcd_display_font_data(x+i*6,y+8,&disp_buf[12],12,4,text_color,black_color);		
				i++;
			}
			else//出错了，找不到字库
			{
#ifdef JIANPUZHAI
				uin_dat16 = (gb2312_dat[i]) + (gb2312_dat[(i+1)]<<8);//0x17、0x80合成为0x1780
				if(uin_dat16>=0x1780&&uin_dat16<=0x17FF)
				{
						lcd_disp_bit1bmp_SingleByte(x+i*8,y,gmy_16_16_bmp_data[uin_dat16-0x1780],16,16,text_color,black_color);	
				}
				i++;
#endif
			}
		}			
	}
}
