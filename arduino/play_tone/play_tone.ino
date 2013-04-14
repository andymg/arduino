#include "pitches.h"

const int LED = 8;
const int btPin = 7;
const int sp = 11;

int melody[]={NOTE_C4,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_G3,0,NOTE_B3,NOTE_C4};

int noteDuration[]={4,8,8,4,4,4,4,4};
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(btPin,INPUT);
}

void loop(){
int v = digitalRead(btPin);
if (HIGH == v){
digitalWrite(LED,LOW);
} else {
  digitalWrite(LED,HIGH);
  for(int n = 0;n<8;n++) {
    int noteD=1000/noteDuration[n];
    tone(sp,melody[n],noteD);
    int pause = noteD *1.30;
    delay(pause);
    
    noTone(sp);
  } 
}
}
