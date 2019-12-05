#include <stdio.h>
#include "api.h"

void *fn_ptr_list[] = { hw_init,
                        hw_led_on, 
                        hw_led_off
                      };


void *get_function_pointer_from_list( int array_element )
{
    return fn_ptr_list[ array_element ];
}