#ifndef _MAIN_IFC_H_
#define _MAIN_IFC_H_

#include "connector.h"

/*
INTERFACE layer

Purpose of this layer is to hide the hardware relevant functions from APPLICATION layer.
According to the used BUILD variant this layer makes connection between a phisycal hardware 
or simulator.
*/

typedef enum{

    FN_LED_ON = 0,
    FN_LED_OFF,
    FN_MAX_VALUE

}FN_PTR_LIST;

void led_on_ifc( void );
void led_off_ifc( void );
void ERROR_HANDLER( const char* fn_name , const char* error_msg );

#endif /* _MAIN_IFC_H_ */