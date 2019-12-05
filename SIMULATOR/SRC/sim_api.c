#include <stdio.h>
#include "api.h"


FUNCTION_POINTER_LIST function_ptr_list_array[ ] = {

    { FN_INIT       , sim_init          },
    { FN_LED_ON     , sim_led_on        },
    { FN_LED_OFF    , sim_led_off       },
    { FN_MAX_VALUE  , INVALID_FN_PTR    }
};

void *get_function_pointer_from_list( FUNCTION_ID fn_id )
{
    unsigned int i = 0;

    while( FN_MAX_VALUE != function_ptr_list_array[ i ].FN_ID )
    {
        if( function_ptr_list_array[ i ].FN_ID == fn_id )
        {
            break;
        }
        i++;
    }

    return ( function_ptr_list_array[ i ].fn_ptr_list );
}