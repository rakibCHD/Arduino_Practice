#define serial
#define charge 3
#define freqIn 2
#define mode 10
#define Delay 15

double frequency, capacitance, inductance;

typedef struct
{
  int flag: 1;
}Flag;

Flag Bit;
void setup()
{
#ifdef serial
  Serial.begin(9600);
#endif
  pinMode(freqIn, INPUT);
  pinMode(charge, OUTPUT);
  pinMode(mode, INPUT_PULLUP);
}

void loop()
{
  for(int i=0;i<Delay;i++)
  {
    digitalWrite(charge, HIGH);
    delayMicroseconds(100);
    digitalWrite(charge, LOW);
    delayMicroseconds(50);
  double Pulse = pulseIn(freqIn, HIGH, 10000);
  if (Pulse > 0.1)
    frequency+= 1.E6 / (2 * Pulse);
    delay(20);
  }
  frequency/=Delay;
#ifdef serial
  Serial.print("frequency:");
  Serial.print( frequency );
  Serial.print(" Hz     ");
#endif
  capacitance = 0.1E-6;
    inductance = (1. / (capacitance * frequency * frequency * 4.*3.14159 * 3.14159)) * 1.E6;

    Serial.print("Ind:");
    Serial.print(inductance/1000);
    Serial.println(" mH");
}
