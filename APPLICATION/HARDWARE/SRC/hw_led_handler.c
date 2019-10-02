#include <stdio.h>
#include "hw_led_handler.h"

void (*fn_ptr_list[])( void ) = {   hw_led_on, 
                                    hw_led_off
                                };

void hw_led_on( void )
{
    printf("I'm %s\n", __func__  );
}

void hw_led_off( void )
{
    printf("I'm %s\n", __func__  );
}

void *get_fn_ptr_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}