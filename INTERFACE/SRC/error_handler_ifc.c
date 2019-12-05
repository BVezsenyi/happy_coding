#include <stdio.h>
#include <stdlib.h>
#include "error_handler_ifc.h"

/*
TODO: Move error handler to PUBLIC LIB
*/

void ERROR_HANDLER( const char* fn_name , int line_num , const char* error_msg )
{
    //Write error log belongs to error_id with function name into log file ( and terminate program ??? )
    printf("Function: %s; Line: %d: \n\t%s\n", fn_name , line_num , error_msg );
    exit( -1 );
}