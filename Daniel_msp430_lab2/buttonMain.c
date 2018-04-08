#include <msp430.h>
#include "switches.h"
#include "led.h"
#include "buzzer.h"
#include "song.h"

void main(void) 
{  
  configureClocks();
  switches_init();
  buzzer_init();
  led_init();
  
  enableWDTInterrupts();

  or_sr(0x18);  // CPU off, GIE on
} 
