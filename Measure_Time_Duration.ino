const int togglePin = 6;
unsigned long startTimeHigh = 0;
unsigned long startTimeLow = 0; 
bool currentState = LOW;

void setup() {
  pinMode(togglePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(togglePin);

  if (sensorValue != currentState) {
    if (sensorValue == HIGH) {
      startTimeHigh = millis();
    } 
    else {
      startTimeLow = millis();
      
      Serial.print("High time: ");
      Serial.print(startTimeLow - startTimeHigh);
      Serial.println(" ms");

      Serial.print("Low time: ");
      Serial.print(millis() - startTimeLow);
      Serial.println(" ms");
    }
    
    currentState = sensorValue;
  }
}
