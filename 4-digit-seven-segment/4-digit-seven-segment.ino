  const int digitPins[] = {2, 3, 4, 5}; 
  const int segmentPins[] = {8, 9, 10, 11}; 
  
  const byte digitSegments[10] = {
    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0X09};

    void setup() {
      for (int i = 0; i < 4; i++) {
        pinMode(digitPins[i], OUTPUT);
        digitalWrite(digitPins[i], LOW); 
      }
      
      for (int i = 0; i < 4; i++) {
        pinMode(segmentPins[i], OUTPUT);
        digitalWrite(segmentPins[i], LOW); 
      }
    }

 void displayDigit(int digit, int value) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(digitPins[i], LOW);
      }
      for (int i = 0; i < 7; i++) {
        digitalWrite(segmentPins[i], bitRead(digitSegments[value], i));
      }
      digitalWrite(digitPins[digit-1],HIGH);
      delay(1);
    }


 void displayNumber(int number)
    {
      if(number == 0)
      {
        PORTB = 0x00;
         for (int i = 0; i < 4; i++){ 
           digitalWrite(digitPins[i], HIGH);}
      }
      
      int rem =0;
      int count = 0;  
        while (number > 0) {
          rem = number%10;
          number = number / 10;     
          displayDigit(count+1,rem);
          count++;  
         }
    }


void loop() {

    displayNumber(8790);
    
}
