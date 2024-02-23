const int segmentPins[] = {2, 3, 4, 5};//seg 1,2,3,4(from left)
const int digitPins[] = {8, 9, 10, 11};//digit pin(1,2,4,8)

const byte digitSegments[12] = {
    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0X09,0x0C,0x0A};

 void setup() {
  Serial.begin(9600);
      for (int i = 0; i < 4; i++) {
        pinMode(segmentPins[i], OUTPUT);
        pinMode(digitPins[i], OUTPUT);
        digitalWrite(segmentPins[i], LOW);
        digitalWrite(digitPins[i], LOW);
      }
}

void displayDigit(int segment, int value) {
      for (int i = 0; i < 4; i++) {
        digitalWrite(segmentPins[i], LOW);
      }
      for (int i = 0; i < 10; i++) {
        digitalWrite(digitPins[i], bitRead(digitSegments[value], i));
      }
      digitalWrite(segmentPins[segment-1],HIGH);
      delay(5);
    }
void displayNumber(String val)
    { 
      int number;
      String ss;
      for(int i=0;i<val.length();i++)
      {
        if(isdigit(val[i]))
           ss+=val[i];
      }
      if(ss.length()<=4)
      {
        if(ss=="0000")
        for(int i=0;i<4;i++)
          displayDigit(i+1,0);
      
        if(ss=="000")
          for(int i=0;i<3;i++)
              displayDigit(i+1,0);
              
        if(ss=="00")
          for(int i=0;i<2;i++)
              displayDigit(i+1,0);
              
        if(ss=="0"&& ss[0]!='0')
              displayDigit(1,0);
              
        if(ss.length()==1 &&ss[0]=='0')
          displayDigit(ss.length(),0);
          
        if(ss.length()<=4 &&ss[0]=='0' && ss[1]!='0')
          displayDigit(ss.length(),0);
          
        if(ss.length()<=4 && ss[0]=='0' && ss[1]=='0' && ss[2]!='0' )
        {
          displayDigit(ss.length(),0);
          displayDigit(ss.length()-1,0);
        }
        if(ss.length()==4 &&ss[0]=='0' && ss[1]=='0' && ss[2]=='0' && ss[3]!='0' )
        {
          displayDigit(ss.length(),0);
          displayDigit(ss.length()-1,0);
          displayDigit(ss.length()-2,0);
        }
      
      number=ss.toInt();
      
      int rem =0;
      int count = 0;
        while (number > 0) {
          rem = number%10;
          number = number / 10;
          displayDigit(count+1,rem);
          count++;
         }
      }
      else
      {
        displayDigit(1,10);
        displayDigit(2,11);
        displayDigit(3,10);
        displayDigit(4,11);
      }    
}

void loop() {
    displayNumber("8790"); 
}
