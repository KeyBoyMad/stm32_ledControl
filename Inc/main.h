/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
void PWM_Config_LED(uint32_t Freq, uint32_t Duty);
void PWM_Config_LV(uint32_t Freq, uint8_t Duty);
void PWM_Config_far(uint32_t Freq, uint8_t Duty);

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
#define __HAL_TIM_SetAutoreload         __HAL_TIM_SET_AUTORELOAD

#define __HAL_TIM_SetCompare            __HAL_TIM_SET_COMPARE
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define optotype_1_Pin GPIO_PIN_2
#define optotype_1_GPIO_Port GPIOA
#define optotype_2_Pin GPIO_PIN_3
#define optotype_2_GPIO_Port GPIOA
#define optotype_3_Pin GPIO_PIN_6
#define optotype_3_GPIO_Port GPIOA
#define optotype_4_Pin GPIO_PIN_7
#define optotype_4_GPIO_Port GPIOA
#define optotype_7_Pin GPIO_PIN_0
#define optotype_7_GPIO_Port GPIOB
#define optotype_8_Pin GPIO_PIN_1
#define optotype_8_GPIO_Port GPIOB
#define LV_BIG_L1_Pin GPIO_PIN_13
#define LV_BIG_L1_GPIO_Port GPIOB
#define LV_BIG_R1_Pin GPIO_PIN_14
#define LV_BIG_R1_GPIO_Port GPIOB
#define LV_BIG_L2_Pin GPIO_PIN_8
#define LV_BIG_L2_GPIO_Port GPIOA
#define LV_BIG_R2_Pin GPIO_PIN_9
#define LV_BIG_R2_GPIO_Port GPIOA
#define optotype_far_Pin GPIO_PIN_10
#define optotype_far_GPIO_Port GPIOA
#define optotype_5_Pin GPIO_PIN_11
#define optotype_5_GPIO_Port GPIOA
#define optotype_6_Pin GPIO_PIN_15
#define optotype_6_GPIO_Port GPIOA
#define optotype_9_Pin GPIO_PIN_3
#define optotype_9_GPIO_Port GPIOB
#define LV_L_Pin GPIO_PIN_8
#define LV_L_GPIO_Port GPIOB
#define LV_R_Pin GPIO_PIN_9
#define LV_R_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
