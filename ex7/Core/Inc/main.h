/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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
#define no1_Pin GPIO_PIN_4
#define no1_GPIO_Port GPIOA
#define no2_Pin GPIO_PIN_5
#define no2_GPIO_Port GPIOA
#define no3_Pin GPIO_PIN_6
#define no3_GPIO_Port GPIOA
#define no4_Pin GPIO_PIN_7
#define no4_GPIO_Port GPIOA
#define no5_Pin GPIO_PIN_8
#define no5_GPIO_Port GPIOA
#define no6_Pin GPIO_PIN_9
#define no6_GPIO_Port GPIOA
#define no7_Pin GPIO_PIN_10
#define no7_GPIO_Port GPIOA
#define no8_Pin GPIO_PIN_11
#define no8_GPIO_Port GPIOA
#define no9_Pin GPIO_PIN_12
#define no9_GPIO_Port GPIOA
#define no10_Pin GPIO_PIN_13
#define no10_GPIO_Port GPIOA
#define no11_Pin GPIO_PIN_14
#define no11_GPIO_Port GPIOA
#define no12_Pin GPIO_PIN_15
#define no12_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
