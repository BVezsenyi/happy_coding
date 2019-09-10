#ifndef _FN_LIST_H_
#define _FN_LIST_H_

#include "sim_led_handler.h"

void (*fn_ptr_list[])( void ) = {   sim_led_on, 
                                    sim_led_off
                                };

#endif /* #ifndef _FN_LIST_H_ */