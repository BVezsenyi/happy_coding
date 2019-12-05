#ifndef _HW_LED_HANDLER_H_
#define _HW_LED_HANDLER_H_

#include <avr/io.h>
#include "common_defines.h"

void hw_led_init    ( void );
void hw_led_on      ( LED_ID );
void hw_led_off     ( LED_ID );

#endif /* _HW_LED_HANDLER_H_ */