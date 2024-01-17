#include <Wire.h>

void setup() 
{
  Serial.begin(9600);
  Wire.begin();

  writeEEPROM(1,27);   //Write eeprom
  delay(1000);

  Serial.print("The returned value is ");
  Serial.println(readEEPROM(1));  // Read eeprom
}

void writeEEPROM(unsigned char address, unsigned char data)
{
  Wire.beginTransmission(0x50);
  Wire.write(address);
  Wire.write(data);
  Wire.endTransmission();
}

unsigned char readEEPROM(unsigned char address)
{
  byte data;
  Wire.beginTransmission(0x50);
  Wire.write(address);
  Wire.endTransmission();
  delay(5);
  Wire.requestFrom(0x50,1);
  delay(10);

  if(Wire.available())
  {
    data = Wire.read();
  }
  return data;
}

void loop() 
{

}
