/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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
#define LEPTON_GPIO3_Pin GPIO_PIN_13
#define LEPTON_GPIO3_GPIO_Port GPIOC
#define LEPTON_GPIO3_EXTI_IRQn EXTI15_10_IRQn
#define ESP_GPIO2_Pin GPIO_PIN_0
#define ESP_GPIO2_GPIO_Port GPIOA
#define ESP_GPIO0_Pin GPIO_PIN_1
#define ESP_GPIO0_GPIO_Port GPIOA
#define PB_STAT_Pin GPIO_PIN_4
#define PB_STAT_GPIO_Port GPIOA
#define ESP_CH_PD_Pin GPIO_PIN_5
#define ESP_CH_PD_GPIO_Port GPIOA
#define SYSTEM_LED_Pin GPIO_PIN_6
#define SYSTEM_LED_GPIO_Port GPIOA
#define ESP_RST_Pin GPIO_PIN_7
#define ESP_RST_GPIO_Port GPIOA
#define LEPTON_PW_DWN_L_Pin GPIO_PIN_8
#define LEPTON_PW_DWN_L_GPIO_Port GPIOA
#define LEPTON_RESET_L_Pin GPIO_PIN_9
#define LEPTON_RESET_L_GPIO_Port GPIOA
#define BUCK_ON_Pin GPIO_PIN_5
#define BUCK_ON_GPIO_Port GPIOB
#define LDO_ON_Pin GPIO_PIN_7
#define LDO_ON_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
