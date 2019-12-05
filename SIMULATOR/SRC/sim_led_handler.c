#include "stdio.h"
#include "sim_led_handler.h"

void sim_led_init( void )
{
    printf("I'm %s\n", __func__  );
}

void sim_led_on( LED_ID led_id )
{
    printf("I'm %s\nMy Argument is: %d\n", __func__ , led_id );
}

void sim_led_off( LED_ID led_id )
{
    printf("I'm %s\nMy Argument is: %d\n", __func__ , led_id );
}

