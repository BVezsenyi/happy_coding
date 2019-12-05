#include "led_handler_ifc.h"

static void check_led_id_validity( LED_ID led_id );

void led_on_ifc( LED_ID led_id )
{
    void (*fn_ptr)( LED_ID );

    check_led_id_validity( led_id );    

    fn_ptr = get_function_pointer_by_id( FN_LED_ON );
    
    (*fn_ptr)( led_id );
}
 
void led_off_ifc( LED_ID led_id )
{
    void (*fn_ptr)( LED_ID );

    check_led_id_validity( led_id ); 
    
    fn_ptr = get_function_pointer_by_id( FN_LED_OFF + 10 );
    
    (*fn_ptr)( led_id );
}

static void check_led_id_validity( LED_ID led_id )
{
    if( ( LED_0 > led_id ) || ( LED_MAX <= led_id ) )
    {
        ERROR_HANDLER( __func__ , __LINE__ , "LED ID is invalid!\n" );
    }
}


