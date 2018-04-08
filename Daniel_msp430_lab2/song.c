#include <msp430.h>
#include "song.h"
#include "buzzer.h"
/*
  Plays a tone and the time of a note 
*/
void play(long note, long tempo){
  long count = 0;
  buzzer_set_period(note);
  while(++count < tempo){}
}

/*
  Plays a specific song  
*/
void playlist(char song){

  switch(song){
  case 1:
    play_c_scale();
    break;
  case 2:
    play_c_scale(); 
    break;
  case 3:
    play_c_scale();
    break;
  case 4:
    play_c_scale();
    break;
  }
}

/*
  Plays a C major scale 
*/
void play_c_scale(){
  
  long count = 0;
  long tempo = QUARTER_NOTE;

  buzzer_set_period(C1);
  while(++count < tempo){}
  count = 0; 
  buzzer_set_period(D1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(F1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(B1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C2);
  while(++count < tempo){}
}
