/* USER CODE BEGIN Header */
/**
  ****************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ****************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ****************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/

#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include <stdio.h>
#include "ssd1306.h"
#include <ssd1306_tests.h>
#include <klok.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define SSD1306_USE_I2C
#define __DEBUG 1
#define BUFFERSIZE 100
#define I2CBUF	12
#define debug_print(x) 	do { if ( __DEBUG ) { strcpy(uartBuffer, x); HAL_UART_Transmit(&huart2, (unsigned char*) uartBuffer, strlen(uartBuffer), HAL_MAX_DELAY); }} while (0)
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
I2C_HandleTypeDef hi2c1;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */
const uint8_t SSD1306_ADDRESS = 0x3C << 1;
const uint8_t RANDOM_REG = 0x0F;

char uartBuffer[BUFFERSIZE] = "";
int z = 0;
uint8_t I2CBuffer[I2CBUF] = {0};
HAL_StatusTypeDef returnValue = 0;


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_I2C1_Init(void);


/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void init() {
	ssd1306_TestAll();
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

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
  MX_USART2_UART_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  debug_print("Hello from dev board\r\n");
  ssd1306_Init();
  /*eerste figuur*/
  /*int side1 = 0;
  int down1 = -25 ;
  int tel1 = 0;

	while( tel1 < 129){

		ssd1306_Fill(White);
		ssd1306_tetris_L(down1, 24);
		down1 = down1 + 1;
		tel1 = tel1 + 1;
	}

	while( side1 < 25){

		ssd1306_Fill(White);
		ssd1306_tetris_L(104, 24+ side1);
		side1 = side1 + 1;
	}*/
	  /*tweede figuur*/
  /*int tel2 = 0;
	int down2 = -30;
	int side2 = 0;

	while(tel2 < 128){
		ssd1306_Fill(White);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_R(down2, 24);
		down2 = down2 + 1;
		tel2 = tel2 + 1;
	}
	while(side2 < 18){
		ssd1306_Fill(White);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_R(96, 24 + side2);
		side2 = side2 + 1;
	}*/
	  /*derde figuur*/
/*	int tel3 = 0;
	int down3 = -16;
	int side3 = 0;

	while(tel3 < 129){

		ssd1306_tetris_R(96, 41);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_V(down3, 24);
		ssd1306_Fill(White);
		down3 = down3 + 1;
		tel3 = tel3 + 1;
	}
	while(side3 < 3){
		ssd1306_Fill(White);

		ssd1306_tetris_R(96, 41);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_V(112, 24+side3);
		side3 = side3 + 1;
	}
*/
	 /*vierde figuur*/
/*int tel4 = 0;
int down4 = -16;
int side4 = 0;

	while(tel4<35){
		ssd1306_Fill(White);
		ssd1306_tetris_R(96, 41);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_V(112, 26);
		ssd1306_tetris_Z(down4, 24);
		down4 = down4 +1;
		tel4 = tel4 + 1;
	}
	ssd1306_Fill(White);
	ssd1306_tetris_R(96, 41);
	ssd1306_tetris_L(104, 48);
	ssd1306_tetris_V(112, 26);
	ssd1306_tetris_Z(45, 24);
	ssd1306_Fill(White);
	ssd1306_tetris_Z_90(45,24);
	ssd1306_tetris_R(96, 41);
	ssd1306_tetris_L(104, 48);
	ssd1306_tetris_V(112, 26);
int tel6 =0;
		while(tel6<13){
			ssd1306_Fill(White);
			ssd1306_tetris_R(96, 41);
			ssd1306_tetris_L(104, 48);
			ssd1306_tetris_V(112, 26);
			ssd1306_tetris_Z_90(45, 24 - tel6);
			tel6=tel6+1;
		}
int tel5 =0;
	while(tel5<51){
		ssd1306_Fill(White);
		ssd1306_tetris_R(96, 41);
		ssd1306_tetris_L(104, 48);
		ssd1306_tetris_V(112, 26);
		ssd1306_tetris_Z_90(35+down4, 11);
		down4 = down4 +1;
		tel5 = tel5 + 1;
	}*//*
int side6 = 0;
int down6 = -30 ;
int tel6 = 0;
int tel7 = 79;

		while( tel6 < 80){

			ssd1306_Fill(White);
			ssd1306_tetris_R(96, 41);
			ssd1306_tetris_L(104, 48);
			ssd1306_tetris_V(112, 26);
			ssd1306_tetris_Z_90(104, 11);
			ssd1306_tetris_R(down6, 24);
			down6 = down6 + 1;
			tel6 = tel6 + 1;
		}

		while( side6 < 21){

			ssd1306_Fill(White);
			ssd1306_tetris_R(96, 41);
			ssd1306_tetris_L(104, 48);
			ssd1306_tetris_V(112, 26);
			ssd1306_tetris_Z_90(104, 11);
			ssd1306_tetris_R(49, 24- side6);
			side6 = side6 + 1;
		}
		while( tel7 < 126){

			ssd1306_Fill(White);
			ssd1306_tetris_R(96, 41);
			ssd1306_tetris_L(104, 48);
			ssd1306_tetris_V(112, 26);
			ssd1306_tetris_Z_90(104, 11);
			ssd1306_tetris_R(down6, 4);
			down6 = down6 + 1;
			tel7 = tel7 + 1;
		}*/


	int down8 = -16 ;
	int tel8 = 0;

				while( tel8 < 80){

					ssd1306_Fill(White);
					ssd1306_tetris_R(96, 41);
					ssd1306_tetris_L(104, 48);
					ssd1306_tetris_V(112, 26);
					ssd1306_tetris_Z_90(104, 11);
					ssd1306_tetris_R(96, 4);
					ssd1306_tetris_T_links(down8,24);
					down8 = down8 + 1;
					tel8 = tel8 + 1;
				}
	int side9=24;
	int tel9=0;
				while( tel9 < 3){

					ssd1306_Fill(White);
					ssd1306_tetris_R(96, 41);
					ssd1306_tetris_L(104, 48);
					ssd1306_tetris_V(112, 26);
					ssd1306_tetris_Z_90(104, 11);
					ssd1306_tetris_R(96, 4);
					ssd1306_tetris_T_links(63,side9);
					side9 = side9 + 1;
					tel9 = tel9 + 1;
				}

	int down10=63;
				while( down10 < 90){

					ssd1306_Fill(White);
					ssd1306_tetris_R(96, 41);
					ssd1306_tetris_L(104, 48);
					ssd1306_tetris_V(112, 26);
					ssd1306_tetris_Z_90(104, 11);
					ssd1306_tetris_R(96, 4);
					ssd1306_tetris_T_links( down10,26);
					down10 = down10 + 1;

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
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Configure LSE Drive Capability 
  */
  HAL_PWR_EnableBkUpAccess();
  __HAL_RCC_LSEDRIVE_CONFIG(RCC_LSEDRIVE_LOW);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_LSE|RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 16;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
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
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART2|RCC_PERIPHCLK_I2C1;
  PeriphClkInit.Usart2ClockSelection = RCC_USART2CLKSOURCE_PCLK1;
  PeriphClkInit.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the main internal regulator output voltage 
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Enable MSI Auto calibration 
  */
  HAL_RCCEx_EnableMSIPLLMode();
}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.Timing = 0x00707CBB;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Analogue filter 
  */
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Digital filter 
  */
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : LD3_Pin */
  GPIO_InitStruct.Pin = LD3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD3_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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
void assert_failed(char *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
