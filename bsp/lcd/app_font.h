#ifndef __APP_FONT_H
#define __APP_FONT_H

#include "main.h"

#ifdef APP_FONT_ENABLE
    #define APP_FONT_API
#else
    #define APP_FONT_API extern
#endif

APP_FONT_API void ui_display_chinese_15x16(uint16_t x,uint16_t y, char *gb2312_dat, uint16_t black_color, uint16_t text_color);
APP_FONT_API void ui_display_chinese_11x12(uint16_t x,uint16_t y, char *gb2312_dat, uint16_t black_color, uint16_t text_color);

#endif
		
