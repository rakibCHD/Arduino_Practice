int pin = -1;
int delayValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {

    char cmd = Serial.read();
    if (cmd == 'p') 
    {
      pin = Serial.parseInt();
      pinMode(pin, OUTPUT);
    }
    else if (cmd == '1') {
      digitalWrite(pin, HIGH);
    } 
    else if (cmd == '0') {
      digitalWrite(pin, LOW);
    }
    else if (cmd == 'b') 
    {
      delayValue = Serial.parseInt();
        while (true) {
          digitalWrite(pin, HIGH);
          delay(delayValue);
          digitalWrite(pin, LOW);
          delay(delayValue);
          
          char Cmd = Serial.read();
          if (Cmd == 'b') 
            delayValue = Serial.parseInt();
          if(Cmd =='p'){
            pin = Serial.parseInt();
            pinMode(pin, OUTPUT);
            break;
          }
           if(Cmd =='o')
            break;
         }
      }
  }
}
