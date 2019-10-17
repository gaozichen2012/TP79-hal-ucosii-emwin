#ifndef  __DRV_LCD_H
#define	 __DRV_LCD_H

#include "main.h"

#ifdef DRV_LCD_ENABLE
	#define DRV_LCD_API 
#else
	#define DRV_LCD_API extern
#endif

DRV_LCD_API void drv_lcd_backlight_control(on_off_t states);
DRV_LCD_API void drv_lcd_init(void);
DRV_LCD_API void drv_lcd_display_control(on_off_t states);
DRV_LCD_API void drv_lcd_sleep_in(void);
DRV_LCD_API void drv_lcd_sleep_out(void);

DRV_LCD_API void drv_lcd_color_clear(u8 x,u8 y, u16 colorData, u8 width, u8 height);
DRV_LCD_API void drv_lcd_display_bmp(u8 x,u8 y,const u16 *bmp,u8 width, u8 height);
DRV_LCD_API	void drv_lcd_display_bmp_with_empty_background(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 back_color);
#endif
