#ifndef  __APP_LCD_H
#define __APP_LCD_H

#include "main.h"

#define COLOR_WIGHT				0xFFFF //��ɫ		
#define COLOR_BLACK				0x0000 //��ɫ
#define COLOR_RED					0xF800 //��ɫ	
#define COLOR_GREEN				0x07E0 //��ɫ			
#define COLOR_BLUE				0x001F //��ɫ
#define COLOR_YELLOW			0xFFE0 //��ɫ	
#define	COLOR_CYAN				0x07FF //��ɫ
#define	COLOR_PURPLE			0x780F //��ɫ
#define COLOR_BABY_BLUE1	0xEFCF //ǳ��
#define COLOR_BABY_BLUE2	0x067A //����ɫ
#define COLOR_BABY_BLUE3	0x0213 //����
#define COLOR_GRAY      	0X8410 //��ɫ
#define COLOR_NAVYBLUE  	0X0009 //����ɫ
#define COLOR_PINK				0X39C7 //�غ�ɫ 0XE497 //��ɫ
#define COLOR_RUST 				0XDE0F //����ɫ�ں�ɫ
#define COLOR_BLACK2			0x2965 //�ź�
#define COLOR_QUBLUE			0xcf9e //�ӽ���ɫ
#define COLOR_SSBLUE			0x1B9D //����

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
