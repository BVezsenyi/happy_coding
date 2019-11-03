#include <stdio.h>
#include "led_handler.h"

int main( void )
{

  //Initialize section:
  init_ifc();

  //Inifinit loop:
  led_on_ifc();
  led_off_ifc();
  
  return 0;
}
