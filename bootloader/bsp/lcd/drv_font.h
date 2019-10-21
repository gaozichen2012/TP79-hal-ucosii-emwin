#ifndef __DRV_FONT_H
#define __DRV_FONT_H

#include "main.h"

#ifdef DRV_FONT_ENABLE
    #define DRV_FONT_API
#else
    #define DRV_FONT_API extern
#endif

DRV_FONT_API u8 drv_get_gb2312_pixel_data_15x16(u8 *out_dat, u8* dat_gb2312);
DRV_FONT_API u8 drv_get_gb2312_pixel_data_11x12(u8 *out_dat, u8* dat_gb2312);
DRV_FONT_API u8 drv_get_ascii_pixel_data_8x16(u8 *out_dat, u8 ascii);
DRV_FONT_API u8 drv_get_ascii_pixel_data_6x12(u8 *out_dat, u8 ascii);
DRV_FONT_API u8 drv_get_ascii_pixel_data_5x7(u8 *out_dat, u8 ascii);
DRV_FONT_API u16 gb2312_to_unicode(u16 GBData);
DRV_FONT_API u16 unicode_to_gb2312(u16 UCSData);

#endif
