#include <stdio.h>
#include "hw_led_handler.h"

void (*fn_ptr_list[])( void ) = {   hw_led_on, 
                                    hw_led_off
                                };

void init_hw_led( void )
{
    //Which LED; which direction
}

//TODO: void hw_led_on( LED_ID )
void hw_led_on( void )
{
    printf("I'm %s\n", __func__  );
}

//TODO: void hw_led_off( LED_ID )
void hw_led_off( void )
{
    printf("I'm %s\n", __func__  );
}

void add_to_fn_ptr_list( void* fn_ptr )
{
    //Add pontier in argument to fn_ptr_list
}

void *get_fn_ptr_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}