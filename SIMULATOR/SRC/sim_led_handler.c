#include <stdio.h>
#include "sim_led_handler.h"

void (*fn_ptr_list[])( void ) = {   sim_led_on, 
                                    sim_led_off
                                };

void sim_led_on( void )
{
    printf("I'm %s\n", __func__  );
}

void sim_led_off( void )
{
    printf("I'm %s\n", __func__  );
}

void *get_fn_ptr_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}