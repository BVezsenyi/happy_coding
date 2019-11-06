#include <stdio.h>
#include "hw_led_handler.h"


void hw_led_init( void )
{
    //printf("I'm %s\n", __func__  );
    DDRB=0xF0;
}

//TODO: void hw_led_on( LED_ID )
void hw_led_on( void )
{
    //printf("I'm %s\n", __func__  );
    PORTB = 0x10;
}

//TODO: void hw_led_off( LED_ID )
void hw_led_off( void )
{
    //printf("I'm %s\n", __func__  );
    PORTB = 0x00;
}

