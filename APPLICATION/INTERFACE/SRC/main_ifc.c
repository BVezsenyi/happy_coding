#include <stdio.h>
#include "main_ifc.h"
#include "hw_led_handler.h"

#if 0 
void (*fn_ptr_list[])( void ) = { hw_led_on }

static void* get_fn_ptr( FN_PTR_LIST fn_id )
{
    void* fn_ptr_ret_val = NULL;

    if( ( FN_LED_ON > fn_id ) || ( FN_MAX_VALUE <= fn_id ) ){
        //Invalid function id error
    }else{
        fn_ptr_ret_val = fn_ptr_list[ fn_id ];
    }

    return fn_ptr_ret_val;
}

void led_on_ifc( int led_id )
{
    //st1. Call function pointed by fn_ptr with parameter 'led_id'
    //st2. handle 'led_id' not only as individual parameter, but as a list
    
    void (*fn_ptr)( void );

    fn_ptr = get_fn_ptr( FN_LED_ON );

    if( NULL == fn_ptr ){
        //Error handling...
    }else{
        //Do nothing...
    }
}

void led_off_ifc()
{
    //st1. Call function pointed by fn_ptr with parameter 'led_id'
    //st2. handle 'led_id' not only as individual parameter, but as a list

    void *fn_ptr;

    fn_ptr = get_fn_ptr( FN_LED_OFF );

    if( NULL == fn_ptr ){
        //Error handling...
    }else{
        //Do nothing...
    }
}
#endif

void led_on_ifc( void )
{
    printf("I'm %s\n" , __func__ );
}

//TODO: move to separated error handler library
void ERROR_HANDLER( char* fn_name , int error_id )
{
    //Write error log belongs to error_id with function name into log file ( and terminate program ??? )
}