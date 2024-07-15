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
#include "stm32h7xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PCM_Reset_Pin GPIO_PIN_6
#define PCM_Reset_GPIO_Port GPIOE
#define EXP_TIP_Pin GPIO_PIN_3
#define EXP_TIP_GPIO_Port GPIOA
#define Exp_Ring_Pin GPIO_PIN_2
#define Exp_Ring_GPIO_Port GPIOB
#define Relay_Bypass_Right_Pin GPIO_PIN_12
#define Relay_Bypass_Right_GPIO_Port GPIOD
#define Relay_Bypass_Left_Pin GPIO_PIN_13
#define Relay_Bypass_Left_GPIO_Port GPIOD
#define DRY_PWM_RIGHT_Pin GPIO_PIN_10
#define DRY_PWM_RIGHT_GPIO_Port GPIOA
#define DRY_PWM_LEFT_Pin GPIO_PIN_15
#define DRY_PWM_LEFT_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
