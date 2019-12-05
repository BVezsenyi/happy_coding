#include <stdio.h>
#include <stdlib.h>
#include "error_handler.h"

void ERROR_HANDLER( const char* fn_name , int line_num , const char* error_msg )
{
    printf("Function: %s; Line: %d: %s\n", fn_name , line_num , error_msg );
    exit( -1 );
}