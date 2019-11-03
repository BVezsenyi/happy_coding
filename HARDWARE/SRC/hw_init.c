#include <stdio.h>
#include "hw_init.h"

void hw_init( void )
{
    printf("I'm %s\n", __func__  );
    hw_led_init();
}