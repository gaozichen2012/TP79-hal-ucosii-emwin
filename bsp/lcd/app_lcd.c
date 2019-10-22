#define APP_LCD_ENABLE

#include "app_lcd.h"
#include "drv_lcd.h"

void app_lcd_init(void)
{
	drv_lcd_init();
	drv_lcd_display_control(ON);
	drv_lcd_backlight_control(ON);
	lcd_color_clear(0,0,COLOR_YELLOW,160,128);
}

/* 设置底色或清屏 */
void lcd_color_clear(u8 x,u8 y, u16 colorData, u8 width, u8 height)
{
	int i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//以下开始数据传输
	for(i=0;i<height;i++)
	{
		for(j = 0; j < width; j++)
		{
			lcd_write_dat16(colorData);
		}
	}
}

/* 显示图片 */
void lcd_display_bmp(u8 x,u8 y,const u8 *bmp,u8 width, u8 height)
{
	u8 i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//以下开始数据传输
	
	for(i=0;i<height;i++)
	{			
		for(j = 0; j < width; j++)
		{
			lcd_write_dat8(*(bmp++));  //发送数据高8位
			lcd_write_dat8(*(bmp++));  //发送数据低8位	
		}
	}
}

/*显示图片函数：透明背景*/
void lcd_display_bmp_with_empty_background(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 back_color)
{
	u8 i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//以下开始数据传输
	
	for(i=0;i<height;i++)
	{
		for(j = 0; j < width; j++)
		{
			if(*(bmp) == 0xff && *(bmp+1) == 0xff)//当该点为白色(0xffff)时，显示背景色
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

/*显示字库点阵数据函数：字体颜色、背景可设置*/
void lcd_display_font_data(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 font_color,u16 back_color)
{
	u8 i,j;
	drv_lcd_set_display_range(x,y,width-1,height-1);
	lcd_write_cmd8(0x2c);  	//以下开始数据传输

	for(i=0; i<height; i++)
	{			
		for(j=0; j<width; j++)
		{
			if( (*(bmp+j+(i/8)*width)) & (0x01 << (i%8)) )//写colordata
					lcd_write_dat16(font_color);
			else  //写back_color
					lcd_write_dat16(back_color);			
		}
	}			
}

/* 显示横线 */
void lcd_display_x_line(uint16_t StartX,uint16_t StartY,uint16_t Length,uint16_t Width,uint16_t Color)
{
	uint16_t i=0,j=0;
	drv_lcd_set_display_range(StartX,StartY,Length-1,Width-1);
	lcd_write_cmd8(0x2c);
		for(i=0;i<Width;i++)
		{
			for(j=0;j<Length;j++)
				lcd_write_dat16(Color);
		}	
}

/* 显示竖线 */
void lcd_display_y_line(uint16_t StartX,uint16_t StartY,uint16_t Length,uint16_t Width,uint16_t Color)
{
	uint16_t i=0,j=0;
	drv_lcd_set_display_range(StartX,StartY,Width-1,Length-1);
	lcd_write_cmd8(0x2c);
		for(i=0;i<Width;i++)
		{
			for(j=0;j<Length;j++)
				lcd_write_dat16(Color);
		}	
}

/* 画点函数（供emwin使用） */
void lcd_display_pixel(u16 x,u16 y,u16 color)
{
	drv_lcd_set_display_range(x,y,0,0);
	lcd_write_cmd8(0x2c);  	//以下开始数据传输
	lcd_write_dat16(color);
}

/* 读点函数（供emwin使用） */

u16 get_lcd_pixel_color(u16 x,u16 y)
{
	return 0xFFFF;
}


