#include <DHT.h>
#include <Wire.h>
#include <SPI.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_BMP280.h>

#define DHTPIN 8 
#define LDRPIN A1  

LiquidCrystal_I2C lcd(0x3F, 20, 4);
Adafruit_BMP280 bmp; 
DHT dht(DHTPIN, DHT11);

void setup() {
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0,0);
  lcd.print("Temp:");       
  
  lcd.setCursor(0,1);
  lcd.print("Prsr:");
  
  lcd.setCursor(0,2);
  lcd.print("Altd:");
  
  lcd.setCursor(0,3);
  lcd.print("Hmdt:");

  unsigned status=bmp.begin(0x76);  
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

  dht.begin();
}

  
void loop() {
    float temperature = bmp.readTemperature();
    float pressure = bmp.readPressure();
    float altitude = bmp.readAltitude();
    int humidity = dht.readHumidity();
    int sunlight = map(analogRead(LDRPIN), 0, 1023, 100, 0);


    double dp= pressure/100;
    double pw= 101.3*exp(-altitude/7900);
    double prediction= dp-pw;

    Serial.println("Temp"+String(temperature));
    Serial.println("Prsr"+String(pressure));
    Serial.println("Altd"+String(altitude));
    Serial.println("Hmdt"+String(humidity));
    Serial.println("Light"+String(sunlight));
    Serial.println("Prdt"+String(prediction));

    
    lcd.setCursor(5, 0);  
    lcd.print(temperature);
    lcd.print("\337C");   //"\337" for degre symbol.

    lcd.setCursor(5, 1); 
    lcd.print(pressure);
    lcd.print("Pa");
    
    lcd.setCursor(5, 2);  
    lcd.print(altitude);
    lcd.print("m");

    lcd.setCursor(5, 3);  
    lcd.print(humidity,1);
    lcd.print("%");

    lcd.setCursor(10, 3);
    lcd.print("Light:");
    lcd.print(sunlight);
    lcd.print("%");

    delay(1000);
}
