#include "init_ifc.h"

void init_ifc( void )
{
    void (*fn_ptr)( );
    
    fn_ptr = get_function_pointer_by_id( FN_INIT );
    
    (*fn_ptr)( );
}


