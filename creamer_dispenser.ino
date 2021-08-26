//550=down
//2400=up
const int down = 550;
const int up = 2400;
const byte servoPin = 0;
const byte switchPin = 2;
void setup() {
  pinMode(servoPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(switchPin) == LOW) { //pressed
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(down);
    digitalWrite(servoPin, LOW);
  } else { //not pressed
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(up);
    digitalWrite(servoPin, LOW);
  }
  delay(20);//50HZ
}
