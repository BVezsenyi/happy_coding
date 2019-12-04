#include <stdio.h>
#include "hw_led_handler.h"


void hw_led_init( void )
{
    DDRD=0xF0;
}

//TODO: void hw_led_on( LED_ID )
void hw_led_on( void )
{
    PORTD = 0xF0;
}

//TODO: void hw_led_off( LED_ID )
void hw_led_off( void )
{
    PORTD = 0x00;
}

