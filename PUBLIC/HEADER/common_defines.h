#ifndef _COMMON_DEFINES_
#define _COMMON_DEFINES_

#define INVALID_FN_PTR  ( void* )0
#define TRUE    1
#define FALSE   0

typedef enum{

    FN_INIT = 0,
    FN_LED_ON,
    FN_LED_OFF,
    FN_MAX_VALUE

}FUNCTION_ID;

typedef enum {

    LED_0 = 0,
    LED_1,
    LED_2,
    LED_MAX
    
}LED_ID;

#endif /* _COMMON_DEFINES_  */ 