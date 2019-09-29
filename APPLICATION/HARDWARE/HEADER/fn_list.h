#ifndef _FN_LIST_H_
#define _FN_LIST_H_

#include "hw_led_handler.h"

void (*fn_ptr_list[])( void ) = {   hw_led_on, 
                                    hw_led_off
                                };

#endif /* _FN_LIST_H_ */