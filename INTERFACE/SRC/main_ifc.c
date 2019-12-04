#include <stdio.h>
#include <stdlib.h>
#include "main_ifc.h"

static void  check_fn_id_validity( FN_ID_LIST );
static void* get_function_pointer_by_id_( FN_ID_LIST );
static void  execute_function( FN_ID_LIST );

void function_execution_request( FN_ID_LIST fn_id )
{
    check_fn_id_validity( fn_id );
    execute_function( fn_id );
}

static void check_fn_id_validity( FN_ID_LIST fn_id )
{    
    if( ( FN_INIT > fn_id ) || ( FN_MAX_VALUE <= fn_id ) )
    {
        ERROR_HANDLER( __func__ , __LINE__  , "Invalid function ID!" );
    }  
}

static void execute_function( FN_ID_LIST fn_id )
{
    void (*fn_ptr)( void );

    fn_ptr = get_function_pointer_by_id_( fn_id );

    (*fn_ptr)();
}

static void* get_function_pointer_by_id_( FN_ID_LIST fn_id )
{
    void* fn_ptr_ret_val = INVALID_FN_PTR;
    
    fn_ptr_ret_val = get_fn_ptr_list( fn_id );
    
    if( INVALID_FN_PTR == fn_ptr_ret_val )
    {
        ERROR_HANDLER( __func__ , __LINE__ , "Invalid function pointer!" );
    }

    return fn_ptr_ret_val;
}



//TODO: move to separated error handler library
//TODO: Define error reactions
void ERROR_HANDLER( const char* fn_name , int line_num , const char* error_msg )
{
    //Write error log belongs to error_id with function name into log file ( and terminate program ??? )
    printf("Function: %s; Line: %d: \n\t%s\n", fn_name , line_num , error_msg );
    exit( -1 );
}