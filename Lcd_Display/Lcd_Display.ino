#include <Wire.h>
#include <LiquidCrystal_I2C.h>
char array1[] = " ABDULLAAH AL FAHIM ";  // CHANGE THIS AS PER YOUR NEED 
char array2[] = " MD RAKIB CHOWDHURY ";     // CHANGE THIS AS PER YOUR NEED 
char array3[] = "     RIMI ZAMAN     ";   // CHANGE THIS AS PER YOUR NEED
char array4[] = "   PRERONA SARKAR   ";     // CHANGE THIS AS PER YOUR NEED

LiquidCrystal_I2C lcd(0x3F, 20, 4); // CHANGE THE I2C ADDRESS
void setup()
{
  lcd.init();
  lcd.backlight();
  
  lcd.print(array1);                // BY DEFAULT CURSOR IS SET AT 0,0 ie, 0th ROW AND 0th COLUMN
  
  lcd.setCursor(0,1);
  lcd.print(array2);
  
  lcd.setCursor(0,2);
  lcd.print(array3);
  
  lcd.setCursor(0,3);
  lcd.print(array4);
}
void loop()
{}
