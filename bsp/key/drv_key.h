#ifndef  __DRV_KEY_H
#define	 __DRV_KEY_H

#include "main.h"

#ifdef DRV_KEY_ENABLE
#define DRV_KEY_API
#else
#define DRV_KEY_API extern
#endif

#endif