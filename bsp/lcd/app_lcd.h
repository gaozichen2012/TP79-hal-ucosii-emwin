#ifndef  __APP_LCD_H
#define __APP_LCD_H

#include "main.h"

#define COLOR_WIGHT				0xFFFF //白色		
#define COLOR_BLACK				0x0000 //黑色
#define COLOR_RED					0xF800 //红色	
#define COLOR_GREEN				0x07E0 //绿色			
#define COLOR_BLUE				0x001F //蓝色
#define COLOR_YELLOW			0xFFE0 //黄色	
#define	COLOR_CYAN				0x07FF //青色
#define	COLOR_PURPLE			0x780F //紫色
#define COLOR_BABY_BLUE1	0xEFCF //浅蓝
#define COLOR_BABY_BLUE2	0x067A //绿松色
#define COLOR_BABY_BLUE3	0x0213 //深蓝
#define COLOR_GRAY      	0X8410 //灰色
#define COLOR_NAVYBLUE  	0X0009 //藏青色
#define COLOR_PINK				0X39C7 //棕黑色 0XE497 //粉色
#define COLOR_RUST 				0XDE0F //铁锈色口红色
#define COLOR_BLACK2			0x2965 //雅黑
#define COLOR_QUBLUE			0xcf9e //接近白色
#define COLOR_SSBLUE			0x1B9D //深蓝

#ifdef APP_LCD_ENABLE
#define APP_LCD_API
#else
#define APP_LCD_API extern
#endif

APP_LCD_API void lcd_init(void);
APP_LCD_API void lcd_color_clear(u8 x,u8 y, u16 colorData, u8 width, u8 height);
APP_LCD_API void lcd_display_y_line(uint16_t StartX,uint16_t StartY,uint16_t Length,uint16_t Width,uint16_t Color);
APP_LCD_API void lcd_display_x_line(uint16_t StartX,uint16_t StartY,uint16_t Length,uint16_t Width,uint16_t Color);
APP_LCD_API void lcd_display_bmp(u8 x,u8 y,const u8 *bmp,u8 width, u8 height);
APP_LCD_API void lcd_display_bmp_with_empty_background(u8 x,u8 y,const u8 *bmp,u8 width, u8 height,u16 back_color);
#endif
