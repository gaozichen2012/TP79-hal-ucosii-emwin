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

DRV_LCD_API void lcd_write_cmd8(u8 cmd);
DRV_LCD_API void lcd_write_dat8(u8 cmd);
DRV_LCD_API void lcd_write_dat16(u16 Data);
DRV_LCD_API void drv_lcd_set_display_range(u16 x,u16 y,u16 width,u16 height);
#endif
