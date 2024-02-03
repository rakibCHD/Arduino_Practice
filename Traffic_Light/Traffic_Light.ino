int red = 5;
int yellow = 7;
int green = 9;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
  
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red,  LOW);
    
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow,  LOW);
  delay(500);
  
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green,  LOW);
  
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green,  LOW);

  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green,  LOW); 
}
