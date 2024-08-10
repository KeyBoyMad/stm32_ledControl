/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "string.h"
#include "stdio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
char ch;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM1_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_TIM4_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */
		PWM_Config_LED(1000, 50);
		PWM_Config_LV(2000, 100);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
		

//		
		ch=getchar();
//    printf("½ÓÊÜµ½×Ö·û:%c\n",ch);
		  switch(ch)
    {
      case '1':
				INIT_LED;
        LED1_ON;
      break;
      case '2':
				INIT_LED;
        LED2_ON;
      break;
      case '3':
				INIT_LED;
        LED3_ON;
      break;
      case '4':
				INIT_LED;
        LED4_ON;
      break;
      case '5':
				INIT_LED;
        LED5_ON;
      break;
      case '6':
				INIT_LED;
        LED6_ON;
      break;
      case '7':
				INIT_LED;
				LED7_ON;
      break;
      case '8':
				INIT_LED;
        LED8_ON;
      break;
      case '9':
				INIT_LED;
        LED9_ON;
      break;
			case 'f':
				INIT_LED;
        LED_far_ON;			
      case 'L':
        LV_left_on;
      break;
      case 'R':
        LV_right_on;
      break;
      case 'i':
        INIT_LV;
      break;
      case 'I':
				INIT_LED;
        INIT_LV;
      break;
			case 'A':
				ALL_LED;
			break;
			case 'H':
			PWM_Config_LED(1000, 16000);
      break;	
			case 'M':
			PWM_Config_LED(1000, 10000);
      break;
			case 'S':
			PWM_Config_LED(40, 1);
      break;						
      default:
			break;      
    } 

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
void PWM_Config_LED(uint32_t Freq, uint32_t Duty)
{
    uint32_t arr = 1000000 / Freq - 1;
    uint32_t ccr = (uint32_t)Duty * arr / 20000;
		__HAL_TIM_SetAutoreload(&htim1, arr);
    __HAL_TIM_SetAutoreload(&htim2, arr);
	  __HAL_TIM_SetAutoreload(&htim3, arr);
	  __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, ccr);
		__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_2, ccr);
    __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_3, ccr);
		__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_4, ccr);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, ccr);
		__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, ccr);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, ccr);
		__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, ccr); 
		__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_4, ccr);
		__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_3, ccr);
	 
}
void PWM_Config_LV(uint32_t Freq, uint8_t Duty)
{
    uint32_t arr = 1000000 / Freq - 1;
    uint32_t ccr = (uint32_t)Duty * arr / 100;
	  __HAL_TIM_SetAutoreload(&htim4, arr);
		__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, ccr);
		__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_2, ccr);
    __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_3, ccr);
		__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_4, ccr);
	 
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
