#include "liquidrystal.h"

int led = 7;
int btn = 2;
void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop(){
  if(digitalRead(btn)==LOW) 
      blink(led);
}

void blink(int led){
  digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
  }
