/**
  ******************************************************************************
  * @file    STM32_Discovery.h
  * @author  MCD Team
  * @version V0.1
  * @date    06/17/2010
  * @brief   Header file for STM32_Discovery.c module.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32_Dicovery_H
#define __STM32_Dicovery_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
/** @addtogroup Utilities
  * @{
  */ 
  
/** @addtogroup STM32_Discovery
  * @{
  */ 

/** @defgroup STM32_Discovery_Abstraction_Layer
  * @{
  */  

/** @defgroup STM32_Discovery_HARDWARE_RESOURCES
  * @{
  */
  
/** @defgroup STM32_Discovery_Exported_Types
  * @{
  */
typedef enum 
{
  LED3 = 0,
  LED4 = 1
} Led_TypeDef;

typedef enum 
{  
  BUTTON_USER = 0
} Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
} ButtonMode_TypeDef;              

/** 
  * @brief  STM32 Button Defines Legacy  
  */ 

#define Button_USER          BUTTON_USER
#define Mode_GPIO            BUTTON_MODE_GPIO
#define Mode_EXTI            BUTTON_MODE_EXTI
#define Button_Mode_TypeDef  ButtonMode_TypeDef


/** @addtogroup STM32_Discovery_LOW_LEVEL_LED
  * @{
  */
#define LEDn                             2
#define LED3_PIN                         GPIO_Pin_9  
#define LED3_GPIO_PORT                   GPIOC
#define LED3_GPIO_CLK                    RCC_APB2Periph_GPIOC  

#define LED4_PIN                         GPIO_Pin_8  
#define LED4_GPIO_PORT                   GPIOC
#define LED4_GPIO_CLK                    RCC_APB2Periph_GPIOC  

/**
  * @}
  */ 
  
/** @addtogroup STM32_Discovery_LOW_LEVEL_BUTTON
  * @{
  */  
#define BUTTONn                          1

/* * @brief USER push-button
 */
#define USER_BUTTON_PIN                   GPIO_Pin_0
#define USER_BUTTON_GPIO_PORT             GPIOA
#define USER_BUTTON_GPIO_CLK              RCC_APB2Periph_GPIOA
/**
  * @}
  */ 

/** @defgroup STM32_Discovery_LOW_LEVEL__Exported_Functions
  * @{
  */ 
void STM32_Discovery_LEDInit(Led_TypeDef Led);
void STM32_Discovery_LEDOn(Led_TypeDef Led);
void STM32_Discovery_LEDOff(Led_TypeDef Led);
void STM32_Discovery_LEDToggle(Led_TypeDef Led);
void STM32_Discovery_PBInit(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
uint32_t STM32_Discovery_PBGetState(Button_TypeDef Button);

/**
  * @}
  */ 
    
#ifdef __cplusplus
}
#endif


#endif /* __STM32_Discovery_H */

/**
  * @}
  */ 

/**
  * @}
  */  

/**
  * @}
  */
  
/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
