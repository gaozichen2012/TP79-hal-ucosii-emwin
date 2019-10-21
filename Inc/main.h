/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "typedef.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_CS_Pin GPIO_PIN_2
#define LCD_CS_GPIO_Port GPIOE
#define LCD_WR_Pin GPIO_PIN_3
#define LCD_WR_GPIO_Port GPIOE
#define LCD_RD_Pin GPIO_PIN_4
#define LCD_RD_GPIO_Port GPIOE
#define LCD_RS_Pin GPIO_PIN_5
#define LCD_RS_GPIO_Port GPIOE
#define LCD_RST_Pin GPIO_PIN_6
#define LCD_RST_GPIO_Port GPIOE
#define FONT_SPI_MISO_Pin GPIO_PIN_1
#define FONT_SPI_MISO_GPIO_Port GPIOB
#define FONT_SPI_SCLK_Pin GPIO_PIN_2
#define FONT_SPI_SCLK_GPIO_Port GPIOB
#define FONT_SPI_MOSI_Pin GPIO_PIN_7
#define FONT_SPI_MOSI_GPIO_Port GPIOE
#define LCD_D0_Pin GPIO_PIN_8
#define LCD_D0_GPIO_Port GPIOE
#define LCD_D1_Pin GPIO_PIN_9
#define LCD_D1_GPIO_Port GPIOE
#define LCD_D2_Pin GPIO_PIN_10
#define LCD_D2_GPIO_Port GPIOE
#define LCD_D3_Pin GPIO_PIN_11
#define LCD_D3_GPIO_Port GPIOE
#define LCD_D4_Pin GPIO_PIN_12
#define LCD_D4_GPIO_Port GPIOE
#define LCD_D5_Pin GPIO_PIN_13
#define LCD_D5_GPIO_Port GPIOE
#define LCD_D6_Pin GPIO_PIN_14
#define LCD_D6_GPIO_Port GPIOE
#define LCD_D7_Pin GPIO_PIN_15
#define LCD_D7_GPIO_Port GPIOE
#define FONT_SPI_CS_Pin GPIO_PIN_12
#define FONT_SPI_CS_GPIO_Port GPIOD
#define LCD_BL_Pin GPIO_PIN_8
#define LCD_BL_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_9
#define LED_RED_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */
#define LCD_DATA_GPIO_Port GPIOE
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
