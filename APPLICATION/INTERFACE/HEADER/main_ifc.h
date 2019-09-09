#ifndef _MAIN_IFC_H_
#define _MAIN_IFC_H_

/*
INTERFACE layer

Purpose of this layer is to hide the hardware relevant functions from APPLICATION layer.
According to the used BUILD variant this layer makes connection between a phisycal hardware 
or simulator.
*/

typedef enum{

    FN_LED_ON = 1,
    FN_LED_OFF,
    FN_MAX_VALUE

}FN_PTR_LIST;

void led_on_ifc( void );

#endif /* _MAIN_IFC_H_ */