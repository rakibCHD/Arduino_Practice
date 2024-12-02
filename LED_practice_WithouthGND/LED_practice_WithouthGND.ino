//Led_Test
// Six led conected from pin 2-13(even pin is Anode,Odd pin is Cathode)
static int Findex = 2;
static int Lindex = 13;

void setup() {
   for(int i=Findex;i<=Lindex;i++)
   {     
      pinMode(i,OUTPUT);
      digitalWrite(i+1,LOW);
   }
}
 void Fn(int p, long d)
 {
   digitalWrite(p, HIGH);
  delay(d);                 
   digitalWrite(p, LOW);
  delay(d);
 }
void loop() {
  Fn(2,200);                 
  Fn(10,500); 
  Fn(6,1000);                 
  Fn(12,1500);
  Fn(8,2000);                 
  Fn(4,2500);              
}
