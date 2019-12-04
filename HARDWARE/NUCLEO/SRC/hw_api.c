#include <stdio.h>
#include "api.h"

void (*fn_ptr_list[])( void ) = {   hw_init,
                                    hw_led_on, 
                                    hw_led_off
                                };


void *get_fn_ptr_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}