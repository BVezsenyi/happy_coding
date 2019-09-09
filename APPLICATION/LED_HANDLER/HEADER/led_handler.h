#ifndef _LED_HANDLER_H_
#define _LED_HANDLER_H_

typedef enum led_state{
  TURN_ON = 0,
  TURN_OFF,
  BLINK
}LED_STATE;

typedef enum blink_period{
  MS_100 = 0,
  MS_500,
  MS_1000
}BLINK_PERIOD;

#endif /* _LED_HANDLER_H_ */