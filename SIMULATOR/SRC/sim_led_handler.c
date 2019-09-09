#include <stdio.h>
#include "sim_led_handler.h"

int main( void )
{
    sim_led_on( );
    sim_led_off( );
}

void sim_led_on( void )
{
    printf("LED is turned on!\n");
}

void sim_led_off( void )
{
    printf("LED is turned off!\n");
}