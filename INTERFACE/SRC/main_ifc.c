#include <stdio.h>
#include "main_ifc.h"

static void  check_fn_id_validity( FN_ID_LIST );

void* get_function_pointer_by_id( FN_ID_LIST fn_id )
{
    void* fn_ptr_ret_val = INVALID_FN_PTR;
    
    check_fn_id_validity( fn_id );

    fn_ptr_ret_val = get_function_pointer_from_list( fn_id );
    
    if( INVALID_FN_PTR == fn_ptr_ret_val )
    {
        ERROR_HANDLER( __func__ , __LINE__ , "Invalid function pointer!" );
    }

    return fn_ptr_ret_val;
}

static void check_fn_id_validity( FN_ID_LIST fn_id )
{    
    if( ( FN_INIT > fn_id ) || ( FN_MAX_VALUE <= fn_id ) )
    {
        ERROR_HANDLER( __func__ , __LINE__  , "Invalid function ID!" );
    }  
}
