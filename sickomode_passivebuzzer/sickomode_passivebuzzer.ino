//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_AS6, NOTE_C6, NOTE_D6, NOTE_DS6, NOTE_F6, NOTE_FS6, NOTE_GS6, NOTE_A6};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  
  for (int i = 0; i < 16; i++) {
    tone(8, melody[0], duration);
    delay(400);
    tone(8, melody[3], duration);
    delay(400);
    tone(8, melody[4], duration);
    delay(400);
    tone(8, melody[5], duration);
    delay(400);
    tone(8, melody[3], duration);
    delay(400);
    tone(8, melody[0], duration);
    delay(400);
    tone(8, melody[6], duration);
    delay(400);
    tone(8, melody[5], duration);
    delay(400
    );
  }
  
  // restart after two seconds 
  delay(2000);
}
