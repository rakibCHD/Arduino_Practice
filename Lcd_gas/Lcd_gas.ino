
  #include <MQ2.h>
  #include <Wire.h> 
  #include <LiquidCrystal_I2C.h>
  LiquidCrystal_I2C lcd(0x27, 16, 2);
  
int Analog_Input = A0;
int smoke;

MQ2 mq2(Analog_Input);

void setup(){
  lcd.backlight();
  mq2.begin();
  lcd.clear();
Serial.begin(9600);
Serial.println("Smoke :");
}
void loop(){

  
  float* values= mq2.read(true);
  smoke = mq2.readSmoke();

  Serial.println(smoke);

  lcd.print("  Quiqk puff!!!");
  delay(2000);
    lcd.clear();
  
  if(smoke>=100)
  {
  lcd.print("  its a Joint");
  delay(1500);
  lcd.clear();
  lcd.print("    Nice");
  delay(1500);
  lcd.clear();
  smoke=0;
  }
}
