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
    play_c_scale0();
    break;
  case 2:
    play_c_scale1(); 
    break;
  case 3:
    play_c_scale2();
    break;
  case 4:
    play_c_scale3();
    break;
  }
}

/*
  Plays a C major scale 
*/
void play_c_scale0(){
  
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
}
void play_c_scale1(){
  
  long count = 0;
  long tempo = QUARTER_NOTE;
  buzzer_set_period(E1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(F1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G1);
  while(++count < tempo){}
  
}
void play_c_scale2(){
  
  long count = 0;
  long tempo = QUARTER_NOTE;
  buzzer_set_period(G1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(B1);
  while(++count < tempo){}
  
}
void play_c_scale3(){
  
  long count = 0;
  long tempo = QUARTER_NOTE;
  buzzer_set_period(B1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C2);
  while(++count < tempo){}
  buzzer_set_period(C1);
  while(++count < tempo){}
  
}
