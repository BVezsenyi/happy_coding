#include "main.h"

int main( void )
{
  init_ifc();
  led_on_ifc( LED_1 );
  led_off_ifc( LED_2 );

  //while( 1 );
  
  return 0;
}
