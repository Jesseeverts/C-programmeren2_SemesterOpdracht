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
  ssd1306_Fill(White);

  /*eerste figuur*/
  /*int side1 = 0;
  int down1 = -25 ;
  int tel1 = 0;

	while( tel1 < 128){

		ssd1306_tetris_L_White(down1 -3, 24);
		ssd1306_tetris_L_Black(down1, 24);
		down1 = down1 + 3;
		tel1 = tel1 + 3;
	}
	ssd1306_tetris_L_White(101, 24);
	ssd1306_tetris_L_Black(103, 24);

	while( side1 < 24){
		ssd1306_tetris_L_White(103,24+side1 -2);
		ssd1306_tetris_L_Black(103, 24+ side1);
		side1 = side1 + 2;
	}
	ssd1306_tetris_L_White(103,46);
	ssd1306_tetris_L_Black(103, 47);*/


	  /*tweede figuur*/
/*	int tel2 = 0;
	int down2 = -30;
	int side2 = 0;

	while(tel2 < 128){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_White(down2 - 3, 28);
		ssd1306_tetris_R_Black(down2, 28);
		down2 = down2 + 3;
		tel2 = tel2 + 3;
	}
	while(side2 < 14){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_White(96, 28 + side2-2);
		ssd1306_tetris_R_Black(96, 28 + side2);
		side2 = side2 + 2;
	}*/
	  /*derde figuur*/
	/*int tel3 = 0;
	int down3 = -16;
	int side3 = 0;

	while(tel3 < 129){

		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_White(down3-3, 24);
		ssd1306_tetris_V_Black(down3, 24);
		down3 = down3 + 3;
		tel3 = tel3 + 3;
	}
	ssd1306_tetris_V_White(110, 24);
	ssd1306_tetris_V_Black(112, 24);
*/
	 /*vierde figuur*/
/*int tel4 = 0;
int down4 = -16;
int side4 = 0;

	while(tel4<45){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_White(down4-3, 24);
		ssd1306_tetris_Z_Black(down4, 24);
		down4 = down4 +3;
		tel4 = tel4 + 3;
	}
	ssd1306_tetris_Z_White(26, 24);
	ssd1306_tetris_L_Black(103, 47);
	ssd1306_tetris_R_Black(96,40);
	ssd1306_tetris_V_Black(112, 24);


	ssd1306_tetris_Z_90_Black(34,24);
	ssd1306_tetris_L_Black(103, 47);
	ssd1306_tetris_R_Black(96,40);
	ssd1306_tetris_V_Black(112, 24);
	ssd1306_tetris_Z_90_White(34,24);

int tel6 =0;
		while(tel6<20){

			ssd1306_tetris_L_Black(103, 47);
			ssd1306_tetris_R_Black(96,40);
			ssd1306_tetris_V_Black(112, 24);
			ssd1306_tetris_Z_90_White(34, 24 - tel6+2);
			ssd1306_tetris_Z_90_Black(34, 24 - tel6);
			tel6=tel6+2;
		}
		ssd1306_tetris_Z_90_White(34, 6);
int tel5 =0;
int down5=0;
	while(tel5<81){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_White(33+down5-3, -1);
		ssd1306_tetris_Z_90_Black(33+down5, -1);
		down5 = down5 +3;
		tel5 = tel5 + 3;
	}*/
  /*figuur 5*/
/*	int down8 = -16 ;
	int tel8 = 0;

				while( tel8 < 80){

					ssd1306_tetris_L_Black(103, 47);
					ssd1306_tetris_R_Black(96,40);
					ssd1306_tetris_V_Black(112, 24);
					ssd1306_tetris_Z_90_Black(111, -1);

					ssd1306_tetris_T_links_White(down8-3,24);
					ssd1306_tetris_T_links_Black(down8,24);
					down8 = down8 + 3;
					tel8 = tel8 + 3;
				}
				ssd1306_tetris_T_links_White(62,24);

	int tel9=0;
				while( tel9 < 18){


					ssd1306_tetris_L_Black(103, 47);
					ssd1306_tetris_R_Black(96,40);
					ssd1306_tetris_V_Black(112, 24);
					ssd1306_tetris_Z_90_Black(111, -1);

					ssd1306_tetris_T_links_White(63,24-tel9+2);
					ssd1306_tetris_T_links_Black(63,24-tel9);
					tel9 = tel9 + 2;
				}
				ssd1306_tetris_T_links_White(63,8);
				ssd1306_tetris_T_links_Black(63,7);

	int down9 = 0;

			while( down9 < 33){

					ssd1306_tetris_L_Black(103, 47);
					ssd1306_tetris_R_Black(96,40);
					ssd1306_tetris_V_Black(112, 24);
					ssd1306_tetris_Z_90_Black(111, -1);

					ssd1306_tetris_T_links_White(63+down9-3,7);
					ssd1306_tetris_T_links_Black(63+down9,7);
					down9 = down9 + 3;
			}
			ssd1306_tetris_T_links_White(93,7);
			ssd1306_tetris_T_links_Black(95,7);
*/


/*	int down11 = -16;

			while(down11 < 60){
				ssd1306_tetris_L_Black(103, 47);
				ssd1306_tetris_R_Black(96,40);
				ssd1306_tetris_V_Black(112, 24);
				ssd1306_tetris_Z_90_Black(111, -1);
				ssd1306_tetris_T_links_Black(95,7);


				ssd1306_tetris_T_White(down11-3, 20);
				ssd1306_tetris_T_Black(down11, 20);
				down11 = down11 + 3;
			}
			ssd1306_tetris_T_White(60, 20);
	int side11 = 0;
			while(side11 < 18){
				ssd1306_tetris_L_Black(103, 47);
				ssd1306_tetris_R_Black(96,40);
				ssd1306_tetris_V_Black(112, 24);
				ssd1306_tetris_Z_90_Black(111, -1);
				ssd1306_tetris_T_links_Black(95,7);

				ssd1306_tetris_T_White(59, 20 + side11-2);
				ssd1306_tetris_T_Black(59, 20 + side11);
				side11 = side11 + 2;
			}

			ssd1306_tetris_T_White(59, 36);
	int down12 = 0;
		while(down12 < 20)
		{
			ssd1306_tetris_L_Black(103, 47);
			ssd1306_tetris_R_Black(96,40);
			ssd1306_tetris_V_Black(112, 24);
			ssd1306_tetris_Z_90_Black(111, -1);
			ssd1306_tetris_T_links_Black(95,7);

			ssd1306_tetris_T_White(59 + down12-3, 39);
			ssd1306_tetris_T_Black(59 + down12, 39);
			down12 = down12 + 3;
		}
		ssd1306_tetris_T_White(77, 39);
		ssd1306_tetris_T_Black(79, 39);*/



/*
  	  int down13 = -16;
  	  int tel13 = 0;

  	  while(tel13<103){
			ssd1306_tetris_L_Black(103, 47);
			ssd1306_tetris_R_Black(96,40);
			ssd1306_tetris_V_Black(112, 24);
			ssd1306_tetris_Z_90_Black(111, -1);
			ssd1306_tetris_T_links_Black(95,7);
			ssd1306_tetris_T_Black(79, 39);

			ssd1306_tetris_T_links_White(down13-3,23);
			ssd1306_tetris_T_links_Black(down13,23);
			tel13 = tel13 + 3;
			down13 = down13 + 3;
  	  }

		ssd1306_tetris_T_links_White(86,23);
		ssd1306_tetris_T_links_Black(87,23);*/
/*

int down14 = -25;
int tel14 = 0;


	while(tel14<88){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);

		ssd1306_tetris_L_White(down14 -3, 24);
		ssd1306_tetris_L_Black(down14, 24);
		down14 = down14 + 3;
		tel14 = tel14 +3;
	}

int side15=0;

	while(side15<26){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);

		ssd1306_tetris_L_White(62, 24-side15+2);
		ssd1306_tetris_L_Black(62, 24-side15);
		side15 = side15 + 2;
	}

		ssd1306_tetris_L_White(62, 0);
		ssd1306_tetris_L_Black(62, -1);


int down16=0;

	while(down16 < 18){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);

		ssd1306_tetris_L_White(62+down16-3,-1);
		ssd1306_tetris_L_Black(62+down16,-1);
		down16 = down16+3;
	}
	ssd1306_tetris_L_White(77,-1);
	ssd1306_tetris_L_Black(79,-1);*/
/*
int down17=-16;
int tel17=0;

	while(tel17<90){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);
		ssd1306_tetris_L_Black(79,-1);

		ssd1306_tetris_Z_White(down17-3, 23);
		ssd1306_tetris_Z_Black(down17, 23);
		down17 = down17 +3;
		tel17 = tel17 +3;
	}*/

/*
int down18=-30;
int tel18=0;

	while(tel18<70){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);
		ssd1306_tetris_L_Black(79,-1);
		ssd1306_tetris_Z_Black(71, 23);

		ssd1306_tetris_R_White(down18 - 3, 28);
		ssd1306_tetris_R_Black(down18, 28);

		down18= down18 + 3;
		tel18 = tel18 + 3;
	}
	ssd1306_tetris_R_White(39, 28);*/
/*
int side18=0;

	while(side18<13){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);
		ssd1306_tetris_L_Black(79,-1);
		ssd1306_tetris_Z_Black(71, 23);

		ssd1306_tetris_R_White(39,28-side18+2);
		ssd1306_tetris_R_Black(39, 28-side18);

		side18 = side18 + 2;
	}

int down19 = 0;

	while(down19<26){
		ssd1306_tetris_L_Black(103, 47);
		ssd1306_tetris_R_Black(96,40);
		ssd1306_tetris_V_Black(112, 24);
		ssd1306_tetris_Z_90_Black(111, -1);
		ssd1306_tetris_T_links_Black(95,7);
		ssd1306_tetris_T_Black(79, 39);
		ssd1306_tetris_T_links_Black(87,23);
		ssd1306_tetris_L_Black(79,-1);
		ssd1306_tetris_Z_Black(71, 23);

		ssd1306_tetris_R_White(39+down19-3,16);
		ssd1306_tetris_R_Black(39+down19, 16);

		down19 = down19 +3;
	}

	ssd1306_tetris_R_White(63,16);
	ssd1306_tetris_R_Black(64, 16);*/

  int down20=-16;
  int tel20=0;

  	while(tel20<70){
  		ssd1306_tetris_L_Black(103, 47);
  		ssd1306_tetris_R_Black(96,40);
  		ssd1306_tetris_V_Black(112, 24);
  		ssd1306_tetris_Z_90_Black(111, -1);
  		ssd1306_tetris_T_links_Black(95,7);
  		ssd1306_tetris_T_Black(79, 39);
  		ssd1306_tetris_T_links_Black(87,23);
  		ssd1306_tetris_L_Black(79,-1);
  		ssd1306_tetris_Z_Black(71, 23);
  		ssd1306_tetris_R_Black(64, 16);

  		ssd1306_tetris_V_White(down20 - 3, 24);
  		ssd1306_tetris_V_Black(down20, 24);

  		down20= down20 + 3;
  		tel20 = tel20 + 3;
  	}

  	int side20=0;

  		while(side20<17){
  			ssd1306_tetris_L_Black(103, 47);
  			ssd1306_tetris_R_Black(96,40);
  			ssd1306_tetris_V_Black(112, 24);
  			ssd1306_tetris_Z_90_Black(111, -1);
  			ssd1306_tetris_T_links_Black(95,7);
  			ssd1306_tetris_T_Black(79, 39);
  			ssd1306_tetris_T_links_Black(87,23);
  			ssd1306_tetris_L_Black(79,-1);
  			ssd1306_tetris_Z_Black(71, 23);
  	  		ssd1306_tetris_R_Black(64, 16);

  			ssd1306_tetris_V_White(53,24+side20-2);
  			ssd1306_tetris_V_Black(53, 24+side20);

  			side20 = side20 + 2;
  		}

  		int down21 = 0;

  			while(down21<12){
  				ssd1306_tetris_L_Black(103, 47);
  				ssd1306_tetris_R_Black(96,40);
  				ssd1306_tetris_V_Black(112, 24);
  				ssd1306_tetris_Z_90_Black(111, -1);
  				ssd1306_tetris_T_links_Black(95,7);
  				ssd1306_tetris_T_Black(79, 39);
  				ssd1306_tetris_T_links_Black(87,23);
  				ssd1306_tetris_L_Black(79,-1);
  				ssd1306_tetris_Z_Black(71, 23);

  				ssd1306_tetris_V_White(53+down21-3,40);
  				ssd1306_tetris_V_Black(53+down21, 40);

  				down21 = down21 +3;
  			}
				ssd1306_tetris_V_White(62,40);
				ssd1306_tetris_V_Black(64, 40);































































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
