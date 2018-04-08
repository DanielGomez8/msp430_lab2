#include <msp430.h>
#include "buzzer.h"
#include "switches.h"
#include "song.h"

__interrupt_vec(PORT2_VECTOR) Port_2(){

  if(P2IFG & SWITCHES){
    P2IFG &= ~SWITCHES;
    switch_interrupt_handler();
  }
}

