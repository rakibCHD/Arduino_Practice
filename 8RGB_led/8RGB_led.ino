// 8 RGB led control with only 6 pin(3 pin as Red,Green,Blue another 3 Pin as 1,2,4(3-8bit Decoder))
int r=2;
int g=3;
int b=4;

int i1=11; //Decoder input A0
int i2=12; //Decoder input A1
int i4=13; //Decoder input A2

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(i1,OUTPUT);
  pinMode(i2,OUTPUT);
  pinMode(i4,OUTPUT);
}
void red(int pin){
  digitalWrite(r,HIGH);
    controlPin(pin);
}
void green(int pin){
  digitalWrite(g,HIGH);
    controlPin(pin);
}


void blue(int pin){
  digitalWrite(b,HIGH);
    controlPin(pin);
}


void controlPin(int pin){
  if(pin==1)
      digitalWrite(i1,HIGH);
  if(pin==2)
      digitalWrite(i2,HIGH);
  if(pin==3)
  {
      digitalWrite(i1,HIGH);
      digitalWrite(i2,HIGH);
  }
  if(pin==4)
      digitalWrite(i4,HIGH);
  if(pin==5)
  {
      digitalWrite(i1,HIGH);
      digitalWrite(i4,HIGH);
  }
  if(pin==6)
  {
      digitalWrite(i2,HIGH);
      digitalWrite(i4,HIGH);
  }
  if(pin==7)
  {
      digitalWrite(i1,HIGH);
      digitalWrite(i2,HIGH);
      digitalWrite(i4,HIGH);
  }
}

void loop() {
    //red(4);
    //green(6);
    blue(2);
}
