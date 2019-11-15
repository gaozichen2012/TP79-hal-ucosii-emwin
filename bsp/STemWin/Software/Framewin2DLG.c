/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0     (GUI_ID_USER + 0x02)
#define ID_ICONVIEW_0     (GUI_ID_USER + 0x0D)
#define ID_ICONVIEW_1     (GUI_ID_USER + 0x0E)

#define ID_ICONVIEW_0_IMAGE_0  0x00
#define ID_ICONVIEW_1_IMAGE_0  0x01

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _acImage_0, "F:\2-������ʱ�ļ�\1-TOM��ʾ��ͼ��\2-TP58\ȫ�׿�\005.dta", ID_ICONVIEW_0_IMAGE_0
*/
static const U8 _acImage_0[2099] = {
  0x42, 0x4D, 0x0D, 0x00, 0x26, 0x00, 0x26, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xAA, 0x5A, 0x00, 0x02, 0x8A, 0x52, 0xAA, 0x52, 0x1A, 0xAB, 0x5A, 0x00, 0x02, 0xAA, 0x52, 0x8A, 0x52, 0x08, 0xAA, 0x5A, 0x00, 0x03, 0x71, 0x8C, 0x17,
  0xBE, 0x79, 0xCE, 0x18, 0x59, 0xCE, 0x00, 0x03, 0x79, 0xCE, 0x17, 0xBE, 0x51, 0x8C, 0x06, 0xAA, 0x5A, 0x00, 0x07, 0xAA, 0x52, 0x55, 0xAD, 0x7D, 0xEF, 0x79, 0xCE, 0x34, 0xA5, 0xF3, 0x9C, 0xF3, 0x9C, 0x14, 0x13, 0x9D, 0x00, 0x11, 0xF3, 0x9C, 0xF3, 0x9C,
  0x34, 0xA5, 0x99, 0xCE, 0x7D, 0xEF, 0x34, 0xA5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0xEF, 0x83, 0x5D, 0xE7, 0x75, 0xAD, 0x8E, 0x73, 0x10, 0x84, 0x92, 0x94, 0x16, 0xB2, 0x94, 0x00, 0x15, 0x92, 0x94, 0x30, 0x84, 0x8E, 0x73, 0x75,
  0xAD, 0x5D, 0xE7, 0xEF, 0x83, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x69, 0x52, 0x55, 0xAD, 0x9A, 0xD6, 0x4D, 0x6B, 0x71, 0x8C, 0xB2, 0x94, 0xD3, 0x9C, 0xF3, 0x9C, 0x14, 0xA5, 0x14, 0xA5, 0x14, 0x9D, 0x14, 0x9D, 0x0C, 0x14, 0xA5, 0x00, 0x17, 0x14, 0x9D,
  0x14, 0x9D, 0x14, 0xA5, 0x14, 0xA5, 0x13, 0x9D, 0xF3, 0x9C, 0xB2, 0x94, 0x71, 0x8C, 0x4D, 0x6B, 0x9A, 0xD6, 0x55, 0xAD, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x55, 0xAD, 0x8E, 0x73, 0x71, 0x8C, 0x71, 0x8C, 0x71, 0x8C, 0x92, 0x94,
  0x92, 0x94, 0x04, 0x92, 0x8C, 0x03, 0x92, 0x94, 0x00, 0x07, 0x91, 0x94, 0x92, 0x94, 0x92, 0x94, 0x91, 0x94, 0x92, 0x94, 0x92, 0x94, 0x92, 0x94, 0x04, 0x92, 0x8C, 0x00, 0x0F, 0x92, 0x94, 0x92, 0x94, 0x92, 0x8C, 0x71, 0x8C, 0x71, 0x8C, 0x8E, 0x73, 0x55,
  0xAD, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8E, 0x73, 0x05, 0x30, 0x84, 0x00, 0x12, 0x30, 0xAC, 0x4F, 0xD4, 0x4F, 0xCC, 0x30, 0xAC, 0x30, 0x84, 0x30, 0x84, 0x30, 0x84, 0x74, 0x64, 0xB7, 0x44, 0xB7, 0x44,
  0x73, 0x64, 0x30, 0x8C, 0x30, 0x84, 0x30, 0x84, 0x50, 0xB4, 0x4F, 0xD4, 0x50, 0xCC, 0x30, 0xA4, 0x05, 0x30, 0x84, 0x00, 0x0F, 0x8E, 0x73, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x6D, 0x73, 0x10,
  0x84, 0xEF, 0x7B, 0xEF, 0x7B, 0xEF, 0x7B, 0xEE, 0xB3, 0x04, 0x2F, 0xEC, 0x00, 0x03, 0x0F, 0xB4, 0xEF, 0x7B, 0x75, 0x4C, 0x04, 0xB9, 0x24, 0x00, 0x03, 0x54, 0x54, 0xEF, 0x83, 0xEE, 0xBB, 0x04, 0x2F, 0xEC, 0x00, 0x41, 0x0F, 0xAC, 0xEF, 0x7B, 0xEF, 0x7B,
  0xEF, 0x7B, 0x10, 0x84, 0x6D, 0x73, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x4D, 0x6B, 0xEF, 0x7B, 0xCF, 0x7B, 0xCF, 0x7B, 0xCE, 0x8B, 0xAD, 0xDB, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4,
  0x2F, 0xEC, 0x10, 0x84, 0xB8, 0x24, 0xB8, 0x24, 0xB8, 0x2C, 0xB8, 0x2C, 0xB9, 0x24, 0xB8, 0x2C, 0xCF, 0x83, 0xCD, 0xE3, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x2F, 0xDC, 0xEF, 0x83, 0xCF, 0x7B, 0xCF, 0x7B, 0xEF, 0x7B, 0x4D, 0x6B, 0x34, 0xA5,
  0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x2D, 0x6B, 0xAE, 0x7B, 0xAE, 0x73, 0xAE, 0x73, 0xAE, 0x93, 0x6C, 0xE3, 0x0E, 0xE4, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2E, 0xEC, 0x11, 0x7C, 0xB9, 0x1C, 0x04, 0x98,
  0x24, 0x00, 0x22, 0xB9, 0x1C, 0xD0, 0x83, 0x6B, 0xE3, 0x2F, 0xE4, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x4F, 0xE4, 0xCE, 0x8B, 0xAE, 0x73, 0xAE, 0x73, 0xAE, 0x7B, 0x2D, 0x6B, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96,
  0xB5, 0x34, 0xA5, 0x2C, 0x63, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x7B, 0x4B, 0xD3, 0x8C, 0xE3, 0x0E, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x0E, 0xE4, 0xAF, 0x7B, 0x97, 0x2C, 0x04, 0x98, 0x24, 0x00, 0x22, 0x97, 0x24, 0xAE, 0x7B, 0x4B, 0xDB, 0x8C, 0xE3,
  0x2E, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x0E, 0xDC, 0x8E, 0x7B, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x73, 0x2C, 0x63, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x0C, 0x63, 0x6D, 0x73, 0x6D, 0x6B, 0x6D, 0x6B,
  0x6D, 0x6B, 0x6D, 0x93, 0x2B, 0xDB, 0x4B, 0xE3, 0x6C, 0xE3, 0x6C, 0xE3, 0x6C, 0xA3, 0x6D, 0x6B, 0xD1, 0x53, 0x04, 0x98, 0x24, 0x00, 0x16, 0xD1, 0x53, 0x6D, 0x6B, 0x6C, 0x9B, 0x2B, 0xDB, 0x4B, 0xE3, 0x6C, 0xE3, 0x6C, 0xDB, 0x6D, 0x93, 0x6D, 0x6B, 0x6D,
  0x6B, 0x6D, 0x6B, 0x6D, 0x73, 0x0C, 0x63, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xEB, 0x62, 0x04, 0x4D, 0x6B, 0x00, 0x14, 0x4D, 0x63, 0x4C, 0x7B, 0x4C, 0xAB, 0x4C, 0xAB, 0x2C, 0x83, 0x4D, 0x63,
  0x4D, 0x6B, 0x2C, 0x73, 0x8F, 0x5B, 0x13, 0x44, 0x13, 0x44, 0x8F, 0x5B, 0x2C, 0x73, 0x4D, 0x6B, 0x4D, 0x63, 0x4C, 0x83, 0x4C, 0xAB, 0x4C, 0xAB, 0x2C, 0x7B, 0x4D, 0x63, 0x04, 0x4D, 0x6B, 0x00, 0x5B, 0xEB, 0x62, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA,
  0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xCB, 0x5A, 0x2D, 0x6B, 0x2C, 0x6B, 0x2C, 0x6B, 0x2C, 0x63, 0x4D, 0x7B, 0xEE, 0xBB, 0x2F, 0xD4, 0x2F, 0xD4, 0xEE, 0xC3, 0x6D, 0x83, 0x0C, 0x63, 0x90, 0x53, 0x35, 0x34, 0x56, 0x2C, 0x56, 0x2C, 0x35,
  0x34, 0x90, 0x53, 0x0C, 0x63, 0x6D, 0x83, 0x0E, 0xC4, 0x2F, 0xD4, 0x2F, 0xD4, 0xEE, 0xBB, 0x4D, 0x7B, 0x2C, 0x63, 0x2C, 0x6B, 0x2C, 0x6B, 0x2D, 0x6B, 0xCB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34,
  0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x4C, 0x7B, 0x2F, 0xDC, 0x4F, 0xEC, 0x4F, 0xEC, 0x4F, 0xE4, 0x4F, 0xEC, 0x2E, 0xE4, 0xD0, 0x63, 0x78, 0x1C, 0x98, 0x1C, 0x78, 0x24, 0x78, 0x24, 0x98, 0x1C, 0x78, 0x1C, 0xD0, 0x6B, 0x2E, 0xE4, 0x4F,
  0xEC, 0x4F, 0xE4, 0x4F, 0xEC, 0x4F, 0xEC, 0x2F, 0xDC, 0x2C, 0x6B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0xEC, 0x62, 0xEC, 0x62, 0xEB,
  0x5A, 0xAD, 0xB3, 0x4F, 0xEC, 0x04, 0x2F, 0xE4, 0x00, 0x03, 0x4F, 0xEC, 0x96, 0x5C, 0x78, 0x1C, 0x04, 0x77, 0x24, 0x00, 0x03, 0x78, 0x1C, 0x96, 0x64, 0x4F, 0xEC, 0x04, 0x2F, 0xE4, 0x00, 0x14, 0x4F, 0xEC, 0xAD, 0xAB, 0xEB, 0x5A, 0xEC, 0x62, 0xEC, 0x62,
  0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xEB, 0x5A, 0xCB, 0x5A, 0xEB, 0x62, 0x0E, 0xD4, 0x2E, 0xEC, 0x05, 0x2E, 0xE4, 0x00, 0x02, 0xB6, 0x64, 0x78, 0x24, 0x04, 0x57, 0x1C,
  0x00, 0x02, 0x78, 0x24, 0xB6, 0x64, 0x05, 0x2E, 0xE4, 0x00, 0x13, 0x2E, 0xEC, 0x0E, 0xD4, 0xEB, 0x62, 0xCB, 0x5A, 0xEB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xCB,
  0x5A, 0xAA, 0x52, 0x0B, 0x7B, 0x0E, 0xEC, 0x05, 0x0E, 0xE4, 0x00, 0x03, 0xED, 0xEB, 0x95, 0x74, 0x98, 0x24, 0x04, 0x57, 0x1C, 0x00, 0x03, 0x98, 0x2C, 0x95, 0x7C, 0xED, 0xEB, 0x06, 0x0E, 0xE4, 0x00, 0x11, 0x0B, 0x7B, 0xAA, 0x52, 0xCB, 0x5A, 0x69, 0x52,
  0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x52, 0x6C, 0xA3, 0xED, 0xEB, 0x05, 0xED, 0xE3, 0x00, 0x03, 0xCC, 0xEB, 0x53, 0x94, 0x98, 0x2C, 0x04, 0x57, 0x1C, 0x00, 0x03,
  0xB8, 0x34, 0x52, 0x94, 0xCC, 0xEB, 0x05, 0xED, 0xE3, 0x00, 0x12, 0xED, 0xEB, 0x4C, 0xA3, 0xAA, 0x52, 0xAA, 0x5A, 0x69, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xCB, 0x5A, 0xCB,
  0x5A, 0x8C, 0xCB, 0xCC, 0xE3, 0x05, 0xAC, 0xE3, 0x00, 0x0A, 0xAC, 0xEB, 0x11, 0xA4, 0xB8, 0x3C, 0x57, 0x24, 0x57, 0x1C, 0x57, 0x1C, 0x57, 0x24, 0xB8, 0x3C, 0x11, 0xA4, 0xAC, 0xEB, 0x05, 0xAC, 0xE3, 0x00, 0x10, 0xCC, 0xE3, 0x8C, 0xCB, 0xCB, 0x5A, 0xCB,
  0x5A, 0x69, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xCB, 0x5A, 0xEB, 0x7A, 0x07, 0x8C, 0xE3, 0x00, 0x0A, 0x6B, 0xEB, 0xEF, 0xB3, 0xB8, 0x44, 0x77, 0x2C, 0x57, 0x1C, 0x57, 0x1C,
  0x77, 0x2C, 0xB8, 0x44, 0xCF, 0xB3, 0x6B, 0xEB, 0x07, 0x8C, 0xE3, 0x00, 0x0F, 0xEB, 0x72, 0xCB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xCB, 0x5A, 0x0B, 0x83, 0x6B,
  0xEB, 0x06, 0x6B, 0xE3, 0x00, 0x0A, 0x4A, 0xE3, 0x8D, 0xCB, 0x97, 0x4C, 0x77, 0x2C, 0x57, 0x1C, 0x57, 0x1C, 0x77, 0x2C, 0x97, 0x4C, 0x8D, 0xCB, 0x4A, 0xE3, 0x07, 0x6B, 0xE3, 0x00, 0x11, 0x0B, 0x83, 0xCB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A,
  0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xEB, 0x62, 0xEB, 0x62, 0xEB, 0x7A, 0x0B, 0x93, 0x2A, 0xDB, 0x04, 0x2A, 0xE3, 0x00, 0x09, 0x2A, 0xDB, 0x0C, 0x8B, 0x56, 0x2C, 0x77, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x77, 0x1C,
  0x56, 0x2C, 0x2B, 0x93, 0x05, 0x2A, 0xE3, 0x00, 0xAC, 0x2A, 0xDB, 0x0B, 0x8B, 0xEB, 0x72, 0xEB, 0x62, 0xEB, 0x62, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0xEC, 0x62, 0xEB,
  0x62, 0xEC, 0x5A, 0xEB, 0x5A, 0xE9, 0xCA, 0xE9, 0xE2, 0xE9, 0xDA, 0xE9, 0xDA, 0xE9, 0xE2, 0xE9, 0xD2, 0xEC, 0x62, 0x35, 0x24, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x78, 0x1C, 0x35, 0x24, 0xEB, 0x62, 0xE9, 0xD2, 0xE9, 0xE2, 0xE9, 0xDA, 0xE9, 0xDA, 0xE9,
  0xE2, 0xE9, 0xCA, 0xEC, 0x5A, 0xEC, 0x5A, 0xEB, 0x62, 0xEC, 0x62, 0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0x0C, 0x63, 0xEC, 0x62, 0xEC, 0x62, 0x0C, 0x5B, 0xC9, 0xC2, 0xA8,
  0xE2, 0xA8, 0xDA, 0xA8, 0xDA, 0xA8, 0xE2, 0xC9, 0xC2, 0xEB, 0x62, 0x14, 0x2C, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x78, 0x1C, 0x14, 0x34, 0xEB, 0x62, 0xC9, 0xC2, 0xA8, 0xE2, 0xA8, 0xDA, 0xA8, 0xDA, 0xA8, 0xE2, 0xC9, 0xBA, 0x0C, 0x5B, 0xEC, 0x62, 0xEC,
  0x62, 0x0C, 0x63, 0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x5B, 0xC9, 0xAA, 0x87, 0xDA, 0x88, 0xDA, 0x88, 0xDA, 0x87, 0xDA, 0xA9,
  0xB2, 0xEB, 0x62, 0xF3, 0x33, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x98, 0x1C, 0xD2, 0x3B, 0xEB, 0x62, 0xA9, 0xB2, 0x87, 0xDA, 0x88, 0xDA, 0x88, 0xDA, 0x87, 0xDA, 0xC9, 0xA2, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96,
  0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x5B, 0xCA, 0x92, 0x67, 0xD2, 0x67, 0xCA, 0x67, 0xCA, 0x47, 0xD2, 0xA9, 0xA2, 0x0B, 0x63, 0xD2, 0x3B, 0x98, 0x1C, 0x77,
  0x24, 0x77, 0x24, 0x98, 0x1C, 0xB1, 0x4B, 0x0B, 0x63, 0xA9, 0xA2, 0x47, 0xD2, 0x67, 0xCA, 0x67, 0xCA, 0x67, 0xD2, 0xCA, 0x92, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A,
  0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x2C, 0x63, 0xCA, 0x82, 0x04, 0x06, 0xCA, 0x00, 0x0A, 0xA9, 0x8A, 0xEB, 0x62, 0x90, 0x4B, 0x99, 0x1C, 0x78, 0x1C, 0x78, 0x1C, 0x98, 0x1C, 0x6F, 0x4B, 0x0B, 0x63, 0xA9, 0x8A,
  0x04, 0x06, 0xCA, 0x00, 0x36, 0xAA, 0x82, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAB, 0x5A, 0x2C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C,
  0x63, 0xCB, 0x62, 0x48, 0x82, 0x27, 0x8A, 0x07, 0x8A, 0x27, 0x82, 0x69, 0x5A, 0xAA, 0x52, 0xAB, 0x52, 0x70, 0x33, 0x71, 0x2B, 0x50, 0x2B, 0x50, 0x33, 0xAB, 0x52, 0xAA, 0x52, 0x8A, 0x5A, 0x28, 0x82, 0x07, 0x8A, 0x27, 0x8A, 0x28, 0x82, 0xAA, 0x5A, 0xEB,
  0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x2C, 0x63, 0xAB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAB, 0x5A, 0x2C, 0x63, 0x04, 0x0C, 0x63, 0x04, 0x0C, 0x5B, 0x03, 0x0C, 0x63, 0x04, 0xEB, 0x62, 0x03,
  0x0C, 0x63, 0x04, 0x0C, 0x5B, 0x04, 0x0C, 0x63, 0x00, 0x0C, 0x2C, 0x63, 0xAB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0xB6, 0xB5, 0xAA, 0x52, 0x2C, 0x6B, 0x05, 0x0C, 0x63, 0x04, 0x2C, 0x63, 0x03, 0x0C,
  0x63, 0x03, 0x2C, 0x63, 0x03, 0x0C, 0x63, 0x04, 0x2C, 0x63, 0x04, 0x0C, 0x63, 0x00, 0x0C, 0x2C, 0x6B, 0xAA, 0x52, 0xB6, 0xB5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x69, 0x52, 0x14, 0xA5, 0x3C, 0xE7, 0x8E, 0x73, 0xAA, 0x5A, 0x18, 0x2C, 0x63,
  0x00, 0x0E, 0x2C, 0x6B, 0x2C, 0x63, 0xAA, 0x5A, 0x8E, 0x73, 0x3C, 0xE7, 0x14, 0xA5, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x4D, 0x6B, 0xFB, 0xDE, 0xBA, 0xD6, 0xEF, 0x7B, 0x1A, 0xCB, 0x5A, 0x00, 0x0E, 0xEF, 0x83, 0xBA, 0xD6, 0xDB, 0xDE, 0x4D,
  0x6B, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x30, 0x84, 0xDB, 0xDE, 0x5C, 0xE7, 0x79, 0xCE, 0x18, 0xC6, 0x16, 0x38, 0xC6, 0x00, 0x06, 0x18, 0xC6, 0x79, 0xCE, 0x5C, 0xE7, 0xDB, 0xDE, 0x10, 0x84, 0x8A, 0x52, 0x05, 0xAA, 0x5A, 0x00,
  0x05, 0x8A, 0x52, 0x2C, 0x6B, 0x71, 0x94, 0x34, 0xA5, 0x34, 0xA5, 0x16, 0x14, 0xA5, 0x00, 0x05, 0x34, 0xA5, 0x14, 0xA5, 0x71, 0x94, 0x2C, 0x6B, 0x8A, 0x52, 0x07, 0xAA, 0x5A, 0x01, 0xAA, 0x52, 0x1C, 0x69, 0x52, 0x01, 0xAA, 0x52, 0x2A, 0xAA, 0x5A,
};

/*********************************************************************
*
*       _acImage_1, "F:\2-������ʱ�ļ�\1-TOM��ʾ��ͼ��\2-TP58\ȫ�׿�\005.dta", ID_ICONVIEW_1_IMAGE_0
*/
static const U8 _acImage_1[2099] = {
  0x42, 0x4D, 0x0D, 0x00, 0x26, 0x00, 0x26, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xAA, 0x5A, 0x00, 0x02, 0x8A, 0x52, 0xAA, 0x52, 0x1A, 0xAB, 0x5A, 0x00, 0x02, 0xAA, 0x52, 0x8A, 0x52, 0x08, 0xAA, 0x5A, 0x00, 0x03, 0x71, 0x8C, 0x17,
  0xBE, 0x79, 0xCE, 0x18, 0x59, 0xCE, 0x00, 0x03, 0x79, 0xCE, 0x17, 0xBE, 0x51, 0x8C, 0x06, 0xAA, 0x5A, 0x00, 0x07, 0xAA, 0x52, 0x55, 0xAD, 0x7D, 0xEF, 0x79, 0xCE, 0x34, 0xA5, 0xF3, 0x9C, 0xF3, 0x9C, 0x14, 0x13, 0x9D, 0x00, 0x11, 0xF3, 0x9C, 0xF3, 0x9C,
  0x34, 0xA5, 0x99, 0xCE, 0x7D, 0xEF, 0x34, 0xA5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0xEF, 0x83, 0x5D, 0xE7, 0x75, 0xAD, 0x8E, 0x73, 0x10, 0x84, 0x92, 0x94, 0x16, 0xB2, 0x94, 0x00, 0x15, 0x92, 0x94, 0x30, 0x84, 0x8E, 0x73, 0x75,
  0xAD, 0x5D, 0xE7, 0xEF, 0x83, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x69, 0x52, 0x55, 0xAD, 0x9A, 0xD6, 0x4D, 0x6B, 0x71, 0x8C, 0xB2, 0x94, 0xD3, 0x9C, 0xF3, 0x9C, 0x14, 0xA5, 0x14, 0xA5, 0x14, 0x9D, 0x14, 0x9D, 0x0C, 0x14, 0xA5, 0x00, 0x17, 0x14, 0x9D,
  0x14, 0x9D, 0x14, 0xA5, 0x14, 0xA5, 0x13, 0x9D, 0xF3, 0x9C, 0xB2, 0x94, 0x71, 0x8C, 0x4D, 0x6B, 0x9A, 0xD6, 0x55, 0xAD, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x55, 0xAD, 0x8E, 0x73, 0x71, 0x8C, 0x71, 0x8C, 0x71, 0x8C, 0x92, 0x94,
  0x92, 0x94, 0x04, 0x92, 0x8C, 0x03, 0x92, 0x94, 0x00, 0x07, 0x91, 0x94, 0x92, 0x94, 0x92, 0x94, 0x91, 0x94, 0x92, 0x94, 0x92, 0x94, 0x92, 0x94, 0x04, 0x92, 0x8C, 0x00, 0x0F, 0x92, 0x94, 0x92, 0x94, 0x92, 0x8C, 0x71, 0x8C, 0x71, 0x8C, 0x8E, 0x73, 0x55,
  0xAD, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8E, 0x73, 0x05, 0x30, 0x84, 0x00, 0x12, 0x30, 0xAC, 0x4F, 0xD4, 0x4F, 0xCC, 0x30, 0xAC, 0x30, 0x84, 0x30, 0x84, 0x30, 0x84, 0x74, 0x64, 0xB7, 0x44, 0xB7, 0x44,
  0x73, 0x64, 0x30, 0x8C, 0x30, 0x84, 0x30, 0x84, 0x50, 0xB4, 0x4F, 0xD4, 0x50, 0xCC, 0x30, 0xA4, 0x05, 0x30, 0x84, 0x00, 0x0F, 0x8E, 0x73, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x6D, 0x73, 0x10,
  0x84, 0xEF, 0x7B, 0xEF, 0x7B, 0xEF, 0x7B, 0xEE, 0xB3, 0x04, 0x2F, 0xEC, 0x00, 0x03, 0x0F, 0xB4, 0xEF, 0x7B, 0x75, 0x4C, 0x04, 0xB9, 0x24, 0x00, 0x03, 0x54, 0x54, 0xEF, 0x83, 0xEE, 0xBB, 0x04, 0x2F, 0xEC, 0x00, 0x41, 0x0F, 0xAC, 0xEF, 0x7B, 0xEF, 0x7B,
  0xEF, 0x7B, 0x10, 0x84, 0x6D, 0x73, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x4D, 0x6B, 0xEF, 0x7B, 0xCF, 0x7B, 0xCF, 0x7B, 0xCE, 0x8B, 0xAD, 0xDB, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4,
  0x2F, 0xEC, 0x10, 0x84, 0xB8, 0x24, 0xB8, 0x24, 0xB8, 0x2C, 0xB8, 0x2C, 0xB9, 0x24, 0xB8, 0x2C, 0xCF, 0x83, 0xCD, 0xE3, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x2F, 0xDC, 0xEF, 0x83, 0xCF, 0x7B, 0xCF, 0x7B, 0xEF, 0x7B, 0x4D, 0x6B, 0x34, 0xA5,
  0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x2D, 0x6B, 0xAE, 0x7B, 0xAE, 0x73, 0xAE, 0x73, 0xAE, 0x93, 0x6C, 0xE3, 0x0E, 0xE4, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x2E, 0xEC, 0x11, 0x7C, 0xB9, 0x1C, 0x04, 0x98,
  0x24, 0x00, 0x22, 0xB9, 0x1C, 0xD0, 0x83, 0x6B, 0xE3, 0x2F, 0xE4, 0x4F, 0xE4, 0x2F, 0xE4, 0x2F, 0xE4, 0x4F, 0xE4, 0xCE, 0x8B, 0xAE, 0x73, 0xAE, 0x73, 0xAE, 0x7B, 0x2D, 0x6B, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96,
  0xB5, 0x34, 0xA5, 0x2C, 0x63, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x7B, 0x4B, 0xD3, 0x8C, 0xE3, 0x0E, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x0E, 0xE4, 0xAF, 0x7B, 0x97, 0x2C, 0x04, 0x98, 0x24, 0x00, 0x22, 0x97, 0x24, 0xAE, 0x7B, 0x4B, 0xDB, 0x8C, 0xE3,
  0x2E, 0xE4, 0x2F, 0xE4, 0x2F, 0xEC, 0x0E, 0xDC, 0x8E, 0x7B, 0x8E, 0x73, 0x8E, 0x73, 0x8E, 0x73, 0x2C, 0x63, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x0C, 0x63, 0x6D, 0x73, 0x6D, 0x6B, 0x6D, 0x6B,
  0x6D, 0x6B, 0x6D, 0x93, 0x2B, 0xDB, 0x4B, 0xE3, 0x6C, 0xE3, 0x6C, 0xE3, 0x6C, 0xA3, 0x6D, 0x6B, 0xD1, 0x53, 0x04, 0x98, 0x24, 0x00, 0x16, 0xD1, 0x53, 0x6D, 0x6B, 0x6C, 0x9B, 0x2B, 0xDB, 0x4B, 0xE3, 0x6C, 0xE3, 0x6C, 0xDB, 0x6D, 0x93, 0x6D, 0x6B, 0x6D,
  0x6B, 0x6D, 0x6B, 0x6D, 0x73, 0x0C, 0x63, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xEB, 0x62, 0x04, 0x4D, 0x6B, 0x00, 0x14, 0x4D, 0x63, 0x4C, 0x7B, 0x4C, 0xAB, 0x4C, 0xAB, 0x2C, 0x83, 0x4D, 0x63,
  0x4D, 0x6B, 0x2C, 0x73, 0x8F, 0x5B, 0x13, 0x44, 0x13, 0x44, 0x8F, 0x5B, 0x2C, 0x73, 0x4D, 0x6B, 0x4D, 0x63, 0x4C, 0x83, 0x4C, 0xAB, 0x4C, 0xAB, 0x2C, 0x7B, 0x4D, 0x63, 0x04, 0x4D, 0x6B, 0x00, 0x5B, 0xEB, 0x62, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA,
  0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xCB, 0x5A, 0x2D, 0x6B, 0x2C, 0x6B, 0x2C, 0x6B, 0x2C, 0x63, 0x4D, 0x7B, 0xEE, 0xBB, 0x2F, 0xD4, 0x2F, 0xD4, 0xEE, 0xC3, 0x6D, 0x83, 0x0C, 0x63, 0x90, 0x53, 0x35, 0x34, 0x56, 0x2C, 0x56, 0x2C, 0x35,
  0x34, 0x90, 0x53, 0x0C, 0x63, 0x6D, 0x83, 0x0E, 0xC4, 0x2F, 0xD4, 0x2F, 0xD4, 0xEE, 0xBB, 0x4D, 0x7B, 0x2C, 0x63, 0x2C, 0x6B, 0x2C, 0x6B, 0x2D, 0x6B, 0xCB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34,
  0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x4C, 0x7B, 0x2F, 0xDC, 0x4F, 0xEC, 0x4F, 0xEC, 0x4F, 0xE4, 0x4F, 0xEC, 0x2E, 0xE4, 0xD0, 0x63, 0x78, 0x1C, 0x98, 0x1C, 0x78, 0x24, 0x78, 0x24, 0x98, 0x1C, 0x78, 0x1C, 0xD0, 0x6B, 0x2E, 0xE4, 0x4F,
  0xEC, 0x4F, 0xE4, 0x4F, 0xEC, 0x4F, 0xEC, 0x2F, 0xDC, 0x2C, 0x6B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0xEC, 0x62, 0xEC, 0x62, 0xEB,
  0x5A, 0xAD, 0xB3, 0x4F, 0xEC, 0x04, 0x2F, 0xE4, 0x00, 0x03, 0x4F, 0xEC, 0x96, 0x5C, 0x78, 0x1C, 0x04, 0x77, 0x24, 0x00, 0x03, 0x78, 0x1C, 0x96, 0x64, 0x4F, 0xEC, 0x04, 0x2F, 0xE4, 0x00, 0x14, 0x4F, 0xEC, 0xAD, 0xAB, 0xEB, 0x5A, 0xEC, 0x62, 0xEC, 0x62,
  0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xEB, 0x5A, 0xCB, 0x5A, 0xEB, 0x62, 0x0E, 0xD4, 0x2E, 0xEC, 0x05, 0x2E, 0xE4, 0x00, 0x02, 0xB6, 0x64, 0x78, 0x24, 0x04, 0x57, 0x1C,
  0x00, 0x02, 0x78, 0x24, 0xB6, 0x64, 0x05, 0x2E, 0xE4, 0x00, 0x13, 0x2E, 0xEC, 0x0E, 0xD4, 0xEB, 0x62, 0xCB, 0x5A, 0xEB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xCB,
  0x5A, 0xAA, 0x52, 0x0B, 0x7B, 0x0E, 0xEC, 0x05, 0x0E, 0xE4, 0x00, 0x03, 0xED, 0xEB, 0x95, 0x74, 0x98, 0x24, 0x04, 0x57, 0x1C, 0x00, 0x03, 0x98, 0x2C, 0x95, 0x7C, 0xED, 0xEB, 0x06, 0x0E, 0xE4, 0x00, 0x11, 0x0B, 0x7B, 0xAA, 0x52, 0xCB, 0x5A, 0x69, 0x52,
  0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x52, 0x6C, 0xA3, 0xED, 0xEB, 0x05, 0xED, 0xE3, 0x00, 0x03, 0xCC, 0xEB, 0x53, 0x94, 0x98, 0x2C, 0x04, 0x57, 0x1C, 0x00, 0x03,
  0xB8, 0x34, 0x52, 0x94, 0xCC, 0xEB, 0x05, 0xED, 0xE3, 0x00, 0x12, 0xED, 0xEB, 0x4C, 0xA3, 0xAA, 0x52, 0xAA, 0x5A, 0x69, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x69, 0x52, 0xCB, 0x5A, 0xCB,
  0x5A, 0x8C, 0xCB, 0xCC, 0xE3, 0x05, 0xAC, 0xE3, 0x00, 0x0A, 0xAC, 0xEB, 0x11, 0xA4, 0xB8, 0x3C, 0x57, 0x24, 0x57, 0x1C, 0x57, 0x1C, 0x57, 0x24, 0xB8, 0x3C, 0x11, 0xA4, 0xAC, 0xEB, 0x05, 0xAC, 0xE3, 0x00, 0x10, 0xCC, 0xE3, 0x8C, 0xCB, 0xCB, 0x5A, 0xCB,
  0x5A, 0x69, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xCB, 0x5A, 0xEB, 0x7A, 0x07, 0x8C, 0xE3, 0x00, 0x0A, 0x6B, 0xEB, 0xEF, 0xB3, 0xB8, 0x44, 0x77, 0x2C, 0x57, 0x1C, 0x57, 0x1C,
  0x77, 0x2C, 0xB8, 0x44, 0xCF, 0xB3, 0x6B, 0xEB, 0x07, 0x8C, 0xE3, 0x00, 0x0F, 0xEB, 0x72, 0xCB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xCB, 0x5A, 0x0B, 0x83, 0x6B,
  0xEB, 0x06, 0x6B, 0xE3, 0x00, 0x0A, 0x4A, 0xE3, 0x8D, 0xCB, 0x97, 0x4C, 0x77, 0x2C, 0x57, 0x1C, 0x57, 0x1C, 0x77, 0x2C, 0x97, 0x4C, 0x8D, 0xCB, 0x4A, 0xE3, 0x07, 0x6B, 0xE3, 0x00, 0x11, 0x0B, 0x83, 0xCB, 0x5A, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A,
  0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0x8A, 0x52, 0xEB, 0x62, 0xEB, 0x62, 0xEB, 0x7A, 0x0B, 0x93, 0x2A, 0xDB, 0x04, 0x2A, 0xE3, 0x00, 0x09, 0x2A, 0xDB, 0x0C, 0x8B, 0x56, 0x2C, 0x77, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x77, 0x1C,
  0x56, 0x2C, 0x2B, 0x93, 0x05, 0x2A, 0xE3, 0x00, 0xAC, 0x2A, 0xDB, 0x0B, 0x8B, 0xEB, 0x72, 0xEB, 0x62, 0xEB, 0x62, 0x8A, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0xEC, 0x62, 0xEB,
  0x62, 0xEC, 0x5A, 0xEB, 0x5A, 0xE9, 0xCA, 0xE9, 0xE2, 0xE9, 0xDA, 0xE9, 0xDA, 0xE9, 0xE2, 0xE9, 0xD2, 0xEC, 0x62, 0x35, 0x24, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x78, 0x1C, 0x35, 0x24, 0xEB, 0x62, 0xE9, 0xD2, 0xE9, 0xE2, 0xE9, 0xDA, 0xE9, 0xDA, 0xE9,
  0xE2, 0xE9, 0xCA, 0xEC, 0x5A, 0xEC, 0x5A, 0xEB, 0x62, 0xEC, 0x62, 0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x52, 0x0C, 0x63, 0xEC, 0x62, 0xEC, 0x62, 0x0C, 0x5B, 0xC9, 0xC2, 0xA8,
  0xE2, 0xA8, 0xDA, 0xA8, 0xDA, 0xA8, 0xE2, 0xC9, 0xC2, 0xEB, 0x62, 0x14, 0x2C, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x78, 0x1C, 0x14, 0x34, 0xEB, 0x62, 0xC9, 0xC2, 0xA8, 0xE2, 0xA8, 0xDA, 0xA8, 0xDA, 0xA8, 0xE2, 0xC9, 0xBA, 0x0C, 0x5B, 0xEC, 0x62, 0xEC,
  0x62, 0x0C, 0x63, 0xAA, 0x52, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x5B, 0xC9, 0xAA, 0x87, 0xDA, 0x88, 0xDA, 0x88, 0xDA, 0x87, 0xDA, 0xA9,
  0xB2, 0xEB, 0x62, 0xF3, 0x33, 0x78, 0x1C, 0x77, 0x24, 0x77, 0x24, 0x98, 0x1C, 0xD2, 0x3B, 0xEB, 0x62, 0xA9, 0xB2, 0x87, 0xDA, 0x88, 0xDA, 0x88, 0xDA, 0x87, 0xDA, 0xC9, 0xA2, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96,
  0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x5B, 0xCA, 0x92, 0x67, 0xD2, 0x67, 0xCA, 0x67, 0xCA, 0x47, 0xD2, 0xA9, 0xA2, 0x0B, 0x63, 0xD2, 0x3B, 0x98, 0x1C, 0x77,
  0x24, 0x77, 0x24, 0x98, 0x1C, 0xB1, 0x4B, 0x0B, 0x63, 0xA9, 0xA2, 0x47, 0xD2, 0x67, 0xCA, 0x67, 0xCA, 0x67, 0xD2, 0xCA, 0x92, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A,
  0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAA, 0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x2C, 0x63, 0xCA, 0x82, 0x04, 0x06, 0xCA, 0x00, 0x0A, 0xA9, 0x8A, 0xEB, 0x62, 0x90, 0x4B, 0x99, 0x1C, 0x78, 0x1C, 0x78, 0x1C, 0x98, 0x1C, 0x6F, 0x4B, 0x0B, 0x63, 0xA9, 0x8A,
  0x04, 0x06, 0xCA, 0x00, 0x36, 0xAA, 0x82, 0x0C, 0x5B, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0xAA, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAB, 0x5A, 0x2C, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C,
  0x63, 0xCB, 0x62, 0x48, 0x82, 0x27, 0x8A, 0x07, 0x8A, 0x27, 0x82, 0x69, 0x5A, 0xAA, 0x52, 0xAB, 0x52, 0x70, 0x33, 0x71, 0x2B, 0x50, 0x2B, 0x50, 0x33, 0xAB, 0x52, 0xAA, 0x52, 0x8A, 0x5A, 0x28, 0x82, 0x07, 0x8A, 0x27, 0x8A, 0x28, 0x82, 0xAA, 0x5A, 0xEB,
  0x5A, 0x0C, 0x63, 0x0C, 0x63, 0x2C, 0x63, 0xAB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0x34, 0xA5, 0xAB, 0x5A, 0x2C, 0x63, 0x04, 0x0C, 0x63, 0x04, 0x0C, 0x5B, 0x03, 0x0C, 0x63, 0x04, 0xEB, 0x62, 0x03,
  0x0C, 0x63, 0x04, 0x0C, 0x5B, 0x04, 0x0C, 0x63, 0x00, 0x0C, 0x2C, 0x63, 0xAB, 0x5A, 0x34, 0xA5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x96, 0xB5, 0xB6, 0xB5, 0xAA, 0x52, 0x2C, 0x6B, 0x05, 0x0C, 0x63, 0x04, 0x2C, 0x63, 0x03, 0x0C,
  0x63, 0x03, 0x2C, 0x63, 0x03, 0x0C, 0x63, 0x04, 0x2C, 0x63, 0x04, 0x0C, 0x63, 0x00, 0x0C, 0x2C, 0x6B, 0xAA, 0x52, 0xB6, 0xB5, 0x96, 0xB5, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x69, 0x52, 0x14, 0xA5, 0x3C, 0xE7, 0x8E, 0x73, 0xAA, 0x5A, 0x18, 0x2C, 0x63,
  0x00, 0x0E, 0x2C, 0x6B, 0x2C, 0x63, 0xAA, 0x5A, 0x8E, 0x73, 0x3C, 0xE7, 0x14, 0xA5, 0x69, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x4D, 0x6B, 0xFB, 0xDE, 0xBA, 0xD6, 0xEF, 0x7B, 0x1A, 0xCB, 0x5A, 0x00, 0x0E, 0xEF, 0x83, 0xBA, 0xD6, 0xDB, 0xDE, 0x4D,
  0x6B, 0x8A, 0x52, 0xAA, 0x5A, 0xAA, 0x5A, 0xAA, 0x5A, 0x8A, 0x52, 0x30, 0x84, 0xDB, 0xDE, 0x5C, 0xE7, 0x79, 0xCE, 0x18, 0xC6, 0x16, 0x38, 0xC6, 0x00, 0x06, 0x18, 0xC6, 0x79, 0xCE, 0x5C, 0xE7, 0xDB, 0xDE, 0x10, 0x84, 0x8A, 0x52, 0x05, 0xAA, 0x5A, 0x00,
  0x05, 0x8A, 0x52, 0x2C, 0x6B, 0x71, 0x94, 0x34, 0xA5, 0x34, 0xA5, 0x16, 0x14, 0xA5, 0x00, 0x05, 0x34, 0xA5, 0x14, 0xA5, 0x71, 0x94, 0x2C, 0x6B, 0x8A, 0x52, 0x07, 0xAA, 0x5A, 0x01, 0xAA, 0x52, 0x1C, 0x69, 0x52, 0x01, 0xAA, 0x52, 0x2A, 0xAA, 0x5A,
};

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "Framewin2", ID_FRAMEWIN_0, 0, -2, 160, 128, 0, 0x64, 0 },
  { ICONVIEW_CreateIndirect, "Iconview", ID_ICONVIEW_0, 0, 0, 38, 38, 0, 0x00260026, 0 },
  { ICONVIEW_CreateIndirect, "Iconview", ID_ICONVIEW_1, 40, 0, 38, 38, 0, 0x00260026, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _GetImageById
*/
static const void * _GetImageById(U32 Id, U32 * pSize) {
  switch (Id) {
  case ID_ICONVIEW_0_IMAGE_0:
    *pSize = sizeof(_acImage_0);
    return (const void *)_acImage_0;
  case ID_ICONVIEW_1_IMAGE_0:
    *pSize = sizeof(_acImage_1);
    return (const void *)_acImage_1;
  }
  return NULL;
}

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  const void * pData;
  WM_HWIN      hItem;
  U32          FileSize;
  int          NCode;
  int          Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Framewin2'
    //
    hItem = pMsg->hWin;
    FRAMEWIN_SetText(hItem, "setting");
    FRAMEWIN_SetTitleVis(hItem, 0);
    //
    // Initialization of 'Iconview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_ICONVIEW_0);
    pData = _GetImageById(ID_ICONVIEW_0_IMAGE_0, &FileSize);
    ICONVIEW_AddStreamedBitmapItem(hItem, pData, "");
    //
    // Initialization of 'Iconview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_ICONVIEW_1);
    pData = _GetImageById(ID_ICONVIEW_1_IMAGE_0, &FileSize);
    ICONVIEW_AddStreamedBitmapItem(hItem, pData, "");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_ICONVIEW_0: // Notifications sent by 'Iconview'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SCROLL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_ICONVIEW_1: // Notifications sent by 'Iconview'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SCROLL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateFramewin2
*/
WM_HWIN CreateFramewin2(void);
WM_HWIN CreateFramewin2(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
