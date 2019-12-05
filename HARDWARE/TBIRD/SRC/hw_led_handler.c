#include <stdio.h>
#include "hw_led_handler.h"


void hw_led_init( void )
{
    DDRD=0xF0;
}

void hw_led_on( LED_ID led_id )
{
    PORTD = 0xF0;
}

void hw_led_off( LED_ID led_id )
{
    PORTD = 0x00;
}

