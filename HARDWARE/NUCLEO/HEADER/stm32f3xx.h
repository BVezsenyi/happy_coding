/**
  ******************************************************************************
  * @file    stm32f3xx.h
  * @author  MCD Application Team
  * @brief   CMSIS STM32F3xx Device Peripheral Access Layer Header File.           
  *            
  *          The file is the unique include file that the application programmer
  *          is using in the C source code, usually in main.c. This file contains:
  *           - Configuration section that allows to select:
  *              - The STM32F3xx device used in the target application
  *              - To use or not the peripheral�s drivers in application code(i.e. 
  *                code will be based on direct access to peripheral�s registers 
  *                rather than drivers API), this option is controlled by 
  *                "#define USE_HAL_DRIVER"
  *  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

#ifndef __STM32F3xx_H
#define __STM32F3xx_H

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */

/**
  * @brief STM32 Family
  */
#if !defined (STM32F3)
#define STM32F3
#endif /* STM32F3 */

/** @addtogroup Device_Included
  * @{
  */

#include "stm32f303xe.h"


#if !defined  (USE_HAL_DRIVER)
/**
 * @brief Comment the line below if you will not use the peripherals drivers.
   In this case, these drivers will not be included and the application code will 
   be based on direct access to peripherals registers 
   */
  /*#define USE_HAL_DRIVER */
#endif /* USE_HAL_DRIVER */

/**
  * @brief CMSIS Device version number V2.3.4
  */
#define __STM32F3_CMSIS_VERSION_MAIN   (0x02) /*!< [31:24] main version */
#define __STM32F3_CMSIS_VERSION_SUB1   (0x03) /*!< [23:16] sub1 version */
#define __STM32F3_CMSIS_VERSION_SUB2   (0x04) /*!< [15:8]  sub2 version */
#define __STM32F3_CMSIS_VERSION_RC     (0x00) /*!< [7:0]  release candidate */
#define __STM32F3_CMSIS_VERSION        ((__STM32F3_CMSIS_VERSION_MAIN     << 24)\
                                       |(__STM32F3_CMSIS_VERSION_SUB1 << 16)\
                                       |(__STM32F3_CMSIS_VERSION_SUB2 << 8 )\
                                       |(__STM32F3_CMSIS_VERSION_RC))

/** @addtogroup Exported_types
  * @{
  */ 
typedef enum 
{
  RESET = 0U, 
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum 
{
  DISABLE = 0U, 
  ENABLE = !DISABLE
} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum 
{
  SUCCESS = 0U,
  ERROR = !SUCCESS
} ErrorStatus;

/** @addtogroup Exported_macros
  * @{
  */
#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL))) 


#if defined (USE_HAL_DRIVER)
 #include "stm32f3xx_hal.h"
#endif /* USE_HAL_DRIVER */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __STM32F3xx_H */
