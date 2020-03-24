
#include "common_defines.h"
#include "target_api.h"

int main( void )
{

  init();
  led_init();

  while( 1 )
  {
    led_on( LED_1 );
    my_delay_ms( 500 );
    led_off( LED_1 );
    my_delay_ms( 500 );
  }

  return 0;
}
