#ifndef _API_
#define _API_

#include "common_defines.h"
#include "sim_init.h"
#include "sim_led_handler.h"

typedef struct
{
    FUNCTION_ID FN_ID;
    void *fn_ptr_list;
    
}FUNCTION_POINTER_LIST;


void *get_function_pointer_from_list( FUNCTION_ID );

#endif /* _API_ */