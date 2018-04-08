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
    play_c_scale3(); //Mario Song
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
  long tempo = EIGHTH_NOTE;
  buzzer_set_period(C2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(A1_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2_SHARP);
  while(++count < tempo){}
  count = tempo /2;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = tempo / 4;
  buzzer_set_period(0);
  while(++count < tempo){}

  
  count = 0;
  buzzer_set_period(C2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(A1_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2_SHARP);
  while(++count < tempo){}
  count = tempo /2;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = tempo / 4;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(F1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(F2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D2);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(D1_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  
  count = tempo /2;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = tempo / 4;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(F1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(F2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D2);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(D1_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  
  count = tempo /2;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  count = tempo + (tempo / 2);
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(C2_SHARP);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(D2);
  while(++count < tempo){}
  
  count = tempo /2;
  buzzer_set_period(C2_SHARP);
  while(++count < tempo){}
  count = tempo /2;
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  
  count = tempo /2;
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  count = tempo /2;
  buzzer_set_period(G1_SHARP);
  while(++count < tempo){}
  
  count = tempo /2;
  buzzer_set_period(G1);
  while(++count < tempo){}
  count = tempo /2;
  buzzer_set_period(C2_SHARP);
  while(++count < tempo){}
  
  count = tempo + (tempo / 2);
  buzzer_set_period(C2_SHARP);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(F2_SHARP);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(F2);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(E1);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(A2_SHARP);
  while(++count < tempo){}
  count = tempo + (tempo / 2);
  buzzer_set_period(A2);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(G2_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D2_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(B1);
  while(++count < tempo){}
  
  count = 0;
  buzzer_set_period(A1_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A1);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G1_SHARP);
  while(++count < tempo){}
}
void play_c_scale3(){ //MARIO SONG
  
  long count = 0;
  long tempo = SIXTEENTH_NOTE;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  
  
  count = 0;
  buzzer_set_period(C3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(B2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2_SHARP);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(A2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  
  
  count = -500;
  buzzer_set_period(G2);
  while(++count < tempo){}
  count = -500;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = -500;
  buzzer_set_period(G3);
  while(++count < tempo){}
  count = 0;
  

  buzzer_set_period(A3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(F3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(G3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(E3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(C3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(D3);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(B2);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
  count = 0;
  buzzer_set_period(0);
  while(++count < tempo){}
}
