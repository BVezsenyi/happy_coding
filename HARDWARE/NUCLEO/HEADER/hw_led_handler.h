#ifndef _HW_LED_HANDLER_H_
#define _HW_LED_HANDLER_H_

#include "common_defines.h"
#include "stm32f3xx_hal.h"

void hw_led_init    ( void );
void hw_led_on      ( LED_ID );
void hw_led_off     ( LED_ID );

void *get_function_pointer_from_list( int );

#endif /* _HW_LED_HANDLER_H_ */