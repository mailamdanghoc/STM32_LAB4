/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define btn1_Pin GPIO_PIN_1
#define btn1_GPIO_Port GPIOA
#define btn2_Pin GPIO_PIN_2
#define btn2_GPIO_Port GPIOA
#define btn3_Pin GPIO_PIN_3
#define btn3_GPIO_Port GPIOA
#define led_timer_Pin GPIO_PIN_5
#define led_timer_GPIO_Port GPIOA
#define led_button_Pin GPIO_PIN_7
#define led_button_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define r1_Pin GPIO_PIN_12
#define r1_GPIO_Port GPIOB
#define y1_Pin GPIO_PIN_13
#define y1_GPIO_Port GPIOB
#define g1_Pin GPIO_PIN_14
#define g1_GPIO_Port GPIOB
#define en0_Pin GPIO_PIN_12
#define en0_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_13
#define en1_GPIO_Port GPIOA
#define en2_Pin GPIO_PIN_14
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_15
#define en3_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define r0_Pin GPIO_PIN_7
#define r0_GPIO_Port GPIOB
#define y0_Pin GPIO_PIN_8
#define y0_GPIO_Port GPIOB
#define g0_Pin GPIO_PIN_9
#define g0_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
