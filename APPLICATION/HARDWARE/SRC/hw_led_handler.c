#include <stdio.h>
#include "hw_led_handler.h"

void hw_led_on( void )
{
    printf("I'm %s\n", __func__  );
}

void hw_led_off( void )
{
    printf("I'm %s\n", __func__  );
}