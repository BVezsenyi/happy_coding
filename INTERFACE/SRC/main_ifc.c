#include <stdio.h>
#include "main_ifc.h"

static void* get_fn_ptr( FN_ID_LIST );
static void  check_fn_id_validity( FN_ID_LIST );

void execute_function( FN_ID_LIST fn_id )
{
    void (*fn_ptr)( void );
    
    check_fn_id_validity( fn_id );

    fn_ptr = get_fn_ptr( fn_id );
    (*fn_ptr)();
}

static void* get_fn_ptr( FN_ID_LIST fn_id )
{
    void* fn_ptr_ret_val = NULL;
    
    fn_ptr_ret_val = get_fn_ptr_list( fn_id );
    
    return fn_ptr_ret_val;
}

static void check_fn_id_validity( FN_ID_LIST fn_id )
{    
    if( ( FN_INIT > fn_id ) || ( FN_MAX_VALUE <= fn_id ) )
    {
        ERROR_HANDLER( __func__ , "Invalid function id!" );
    }  
}

//TODO: move to separated error handler library
//TODO: Define error reactions
void ERROR_HANDLER( const char* fn_name , const char* error_msg )
{
    //Write error log belongs to error_id with function name into log file ( and terminate program ??? )
    printf("%s: %s\n", fn_name  , error_msg );
}