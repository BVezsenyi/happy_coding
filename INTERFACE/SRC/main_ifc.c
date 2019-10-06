#include <stdio.h>
#include "main_ifc.h"

static void* get_fn_ptr( FN_PTR_LIST );
static void execute_function( FN_PTR_LIST );

void led_on_ifc( void )
{
    execute_function( FN_LED_ON );
}
 
void led_off_ifc()
{
    execute_function( FN_LED_OFF );
}

static void* get_fn_ptr( FN_PTR_LIST fn_id )
{
    void* fn_ptr_ret_val = NULL;

    if( ( FN_LED_ON > fn_id ) || ( FN_MAX_VALUE <= fn_id ) ){
        ERROR_HANDLER( __func__ , "Invalid function id!" );
    }else{
        fn_ptr_ret_val = get_fn_ptr_list( fn_id );
    }

    return fn_ptr_ret_val;
}

static void execute_function( FN_PTR_LIST fn_id )
{
    void (*fn_ptr)( void );

    fn_ptr = get_fn_ptr( fn_id );

    if( NULL == fn_ptr ){

        ERROR_HANDLER( __func__ , "NULL pointer!" );

    }else{
        (*fn_ptr)();
    }
}

//TODO: move to separated error handler library
void ERROR_HANDLER( const char* fn_name , const char* error_msg )
{
    //Write error log belongs to error_id with function name into log file ( and terminate program ??? )
    printf("%s: %s\n", fn_name  , error_msg );
}