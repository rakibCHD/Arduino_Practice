#include <LiquidCrystal.h>

const int pulsePin = 8;

int pulseHigh; 
int pulseLow; 
float pulseTotal; 
float frequency; 

void setup()
{
    pinMode(pulsePin,INPUT);
    Serial.begin(9600);
}
void loop()
{
    pulseHigh = pulseIn(pulsePin,HIGH);
    pulseLow = pulseIn(pulsePin,LOW);
    pulseTotal = pulseHigh + pulseLow;
    
    frequency=1000000/pulseTotal; 
    
    Serial.print("Frequency is: ");
    Serial.print(frequency);
    Serial.println(" Hz");
    delay(1000);
}
