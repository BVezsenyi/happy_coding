#include <stdio.h>
#include "hw_led_handler.h"


void hw_led_init( void )
{
    DDRB=0xF0;
}

//TODO: void hw_led_on( LED_ID )
void hw_led_on( void )
{
    PORTB = 0xF0;
}

//TODO: void hw_led_off( LED_ID )
void hw_led_off( void )
{
    PORTB = 0x00;
}

