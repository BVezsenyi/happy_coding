#ifndef _LED_HANDLER_IFC_
#define _LED_HANDLER_IFC_

#include "main_ifc.h"

void led_on_ifc( LED_ID_ENUM );
void led_off_ifc( void );


/*
TODO: Move this typedef to public library
*/
typedef enum{

    LED_0 = 0,
    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_MAX
    
}LED_ID_ENUM;

#endif /* _LED_HANDLER_IFC_ */