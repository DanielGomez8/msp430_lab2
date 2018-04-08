#include <msp430.h>
#include "switches.h"
#include "buzzer.h"
#include "song.h"

static char switch_update_interrupt_sense(){
  char p2val = P2IN;                            
  P2IES |= (p2val & SWITCHES);                    /* if switch up, sense down */
  P2IES &= (p2val | ~SWITCHES);                   /* if switch down, sense up */
  return p2val;
}

void switches_init(){                                /* setup switch */
  P2REN |= SWITCHES;                               /* enable interrupts from switches */
  P2IE = SWITCHES;                                 /* pull-ups for switches */
  P2OUT |= SWITCHES;                               /* set switches' bits for input */
  P2DIR &= ~SWITCHES;
}


/* Switch handler:
   Plays a different song for
   each individual switch pressed
 */

void switch_interrupt_handler(){
  char p2val = switch_update_interrupt_sense();

  if(!(p2val & SW0))
    playlist(1);             /* plays c scale */
  else if(!(p2val & SW1))
    playlist(2);             /* plays kingdom hearts theme */
  else if(!(p2val & SW2))
    playlist(3);             /* plays final fantasy fanfare theme */
  else if(!(p2val & SW3))
    playlist(4);             /* plays final fantasy chocobo theme */
 
}
