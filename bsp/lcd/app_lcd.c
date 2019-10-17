#define APP_LCD_ENABLE

#include "app_lcd.h"
#include "drv_lcd.h"

void lcd_init(void)
{
	drv_lcd_init();
	drv_lcd_display_control(ON);
	drv_lcd_backlight_control(ON);
	lcd_color_clear(0,0,COLOR_YELLOW,160,128);
}

/* ÇåÆÁ */
void lcd_color_clear(u8 x,u8 y, u16 colorData, u8 width, u8 height)
{
	drv_lcd_color_clear(x,y,colorData,width,height);
}

/* ÏÔÊ¾Í¼Æ¬ */
void lcd_display_bmp(u8 x,u8 y,const u16 *bmp,u8 width, u8 height)
{
	drv_lcd_display_bmp(x,y,bmp,width,height);
}

/* ÏÔÊ¾Í¼Æ¬º¯Êý£ºÍ¸Ã÷±³¾° */
void lcd_display_bmp_with_empty_background(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 back_color)
{
	drv_lcd_display_bmp_with_empty_background(x,y,bmp,width,height,back_color);
}
