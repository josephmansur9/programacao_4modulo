int redPin = 11;
int bluePin = 10;
int greenPin = 9;


void cor (int red, int blue, int green) {
  analogWrite(redPin, red);
  analogWrite(bluePin, blue);
  analogWrite(greenPin, green);
}
void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop () {
  cor (255, 255, 0); 
  delay(500);
   cor (150, 0, 250);
   delay(500);
   cor (250, 0, 140);
   delay(500);
}