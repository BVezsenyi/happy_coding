#ifndef _HW_LED_HANDLER_H_
#define _HW_LED_HANDLER_H_

void hw_led_init    ( void );
void hw_led_on      ( void );
void hw_led_off     ( void );

void *get_function_pointer_from_list( int );

#endif /* _HW_LED_HANDLER_H_ */