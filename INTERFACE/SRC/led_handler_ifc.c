#include "led_handler_ifc.h"

void led_on_ifc( void )
{
    function_execution_request( FN_LED_ON );
}
 
void led_off_ifc( void )
{
    function_execution_request( FN_LED_OFF );
}


