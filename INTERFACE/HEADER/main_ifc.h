#ifndef _MAIN_IFC_H_
#define _MAIN_IFC_H_

#include "common_defines.h"
#include "connector.h"

/*
INTERFACE layer

Purpose of this layer is to hide the hardware relevant functions from APPLICATION layer.
According to the used BUILD variant this layer makes connection between a phisycal hardware 
or simulator.
*/


void execute_function( FN_PTR_LIST );
void ERROR_HANDLER( const char* , const char* );

#endif /* _MAIN_IFC_H_ */