#include <IRremote.h>

IRrecv IR(A0);
int a=3;
int b=4;
int c=5;
int d=6;
int e=7;
int f=8;
int g=9;
int h=10;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);

  IR.enableIRIn();
  Serial.begin(9600);
}


void loop() {
    if(IR.decode())
    {
      digitalWrite(h,HIGH);
      delay(500);
      digitalWrite(h,LOW);
      
      //Serial.println(IR.decodedIRData.decodedRawData,HEX);
      //delay(200);
      if(IR.decodedIRData.decodedRawData == 0xE6 )
        zero();
      if(IR.decodedIRData.decodedRawData == 0xC2 )
        one();
      if(IR.decodedIRData.decodedRawData == 0xC6 )
        two();
      if(IR.decodedIRData.decodedRawData == 0xCA )
        three();
      if(IR.decodedIRData.decodedRawData == 0xCE )
        four();
      if(IR.decodedIRData.decodedRawData == 0xD2 )
        five();
      if(IR.decodedIRData.decodedRawData == 0xD6 )
        six();
      if(IR.decodedIRData.decodedRawData == 0xDA )
        seven();
      if(IR.decodedIRData.decodedRawData == 0xDE )
        eight();
      if(IR.decodedIRData.decodedRawData == 0xE2 )
        nine();
      if( IR.decodedIRData.decodedRawData == 0xA ){
        off();
        }

      IR.resume();
    }
}

void off(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  }

void zero(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  }

void one(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  }

void two(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  }

void three(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  }
  
void four(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  }

void five(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  }

void six(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  }

void seven(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  }

void eight(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  }

void nine(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
  }
