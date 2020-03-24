#ifndef _LED_HANDLER_H_
#define _LED_HANDLER_H_

#include <avr/io.h>
#include "common_defines.h"

void led_init    ( void );
void led_on      ( LED_ID );
void led_off     ( LED_ID );

#endif /* _LED_HANDLER_H_ */