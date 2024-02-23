int red=10;
int green=9;
int blue=8;

void setColor(int r, int g, int b) {
    analogWrite(red,r);
    analogWrite(green,g);
    analogWrite(blue,b);
}

void setup() {

}

void loop() {
    setColor(0,0,255); // Set color
}
