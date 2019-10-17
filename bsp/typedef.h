/*-------------------------------------------*/
/* Integer type definitions for FatFs module */
/*-------------------------------------------*/

#ifndef _TYPEDEF
#define _TYPEDEF

#include "stdint.h"


/* These types must be 16-bit, 32-bit or larger integer */
typedef int INT;
typedef unsigned int UINT;

/* These types must be 8-bit integer */
typedef char CHAR;
typedef unsigned char UCHAR;
typedef unsigned char BYTE;

/* These types must be 16-bit integer */
typedef short SHORT;
typedef unsigned short USHORT;
typedef unsigned short WORD;
typedef unsigned short WCHAR;

/* These types must be 32-bit integer */
typedef long LONG;
typedef unsigned long ULONG;
typedef unsigned long DWORD;


//------------------------------------------------
#ifndef BYTE
typedef unsigned char 			BYTE;
#endif
//------------------------------------------------
#ifndef u8
typedef unsigned char 			u8;
#endif

#ifndef u16
typedef unsigned short 			u16;
#endif

#ifndef u32
typedef unsigned int 			u32;
#endif

#ifndef u64
typedef unsigned long      			u64;
#endif

//------------------------------------------------
#ifndef uint8
typedef unsigned char 			uint8;

#endif

#ifndef uint16
typedef unsigned short 			uint16;
#endif

#ifndef uint32
typedef unsigned int 			uint32;
#endif

#ifndef uint64
typedef unsigned long 			uint64;
#endif
//------------------------------------------------
#ifndef uint8_t
#define uint8_t 				unsigned char
#endif

#ifndef uint16_t
#define uint16_t				unsigned short
#endif

#ifndef uint32_t
#define uint32_t 			unsigned int
#endif

#ifndef uint64_t
#define uint64_t 			unsigned long
#endif

//------------------------------------------------
#ifndef int8
typedef signed char 			int8;
#endif

#ifndef int16
typedef signed short 			int16;
#endif

#ifndef int32
typedef signed int 				int32;
#endif

#ifndef int64
typedef signed long 			int64;
#endif

#ifndef bool
typedef enum
{
  FALSE=0,
  TRUE,
} bool;
#endif

#ifndef BOOL_H
#define BOOL_H
typedef unsigned int   BOOL;
#endif



#ifndef BOOL_t
#define BOOL_t bool
#endif

typedef enum
{
  OFF=0,
  ON=1,
} on_off_t;

typedef enum
{
  FAILED,
  SUCCESSED,
} OpResault_t;

typedef enum
{
  DIR_DOWN=0,	//下
  DIR_UP,			//上
  DIR_LEFT, 	//左
  DIR_RIGHT,	//右
  DIR_FRONT,	//前
  DIR_BACK,		//后
} Dirction_t;



#endif

