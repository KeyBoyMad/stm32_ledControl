/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for 
  *                      the gpio  
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */
#define INIT_LED 			  HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_1);\
												HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_2);\
												HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_3);\
	 											HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_4);\
	 											HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_1);\
	 											HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_2);\
	 											HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_3);\
	 											HAL_TIM_PWM_Stop(&htim3,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_3);\

#define ALL_LED 			  HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_1);\
												HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);\
												HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);\
	 											HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_4);\
	 											HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_1);\
	 											HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_2);\
	 											HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_3);\
	 											HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);\
												
#define LED_far_ON			HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);											 
#define LED1_ON			    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);
#define LED2_ON			   	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_4);										
#define LED3_ON			   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
#define LED4_ON			   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
#define LED5_ON			   	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);
#define LED6_ON			   	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
#define LED7_ON			   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
#define LED8_ON			   	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
#define LED9_ON			   	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);	 
	 
#define INIT_LV					HAL_TIM_PWM_Stop(&htim4,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);\
												HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_2);\
												HAL_TIM_PWM_Stop(&htim4,TIM_CHANNEL_3);\
												HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);\
												HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);\
	 
#define LV_left_on			HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_3);\
												HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);\
												HAL_TIMEx_PWMN_Start(&htim1,TIM_CHANNEL_1);\
												HAL_TIM_PWM_Stop(&htim4,TIM_CHANNEL_4);\
												HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);\
												HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_2);\

												
#define LV_right_on			HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_4);\
												HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);\
												HAL_TIMEx_PWMN_Start(&htim1,TIM_CHANNEL_2);\
												HAL_TIM_PWM_Stop(&htim4,TIM_CHANNEL_3);\
												HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);\
												HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);\
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
