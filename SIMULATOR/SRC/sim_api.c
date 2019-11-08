#include <stdio.h>
#include "sim_api.h"

void (*fn_ptr_list[])( void ) = {   sim_init,
                                    sim_led_on, 
                                    sim_led_off
                                };


void *get_fn_ptr_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}