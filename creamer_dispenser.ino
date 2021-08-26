//550=down
//2400=up
const int down = 550;
const int up = 2400;
const byte servoPin = 0;
const byte switchPin = 2;
const byte ledPin = 1;
void setup() {
  pinMode(servoPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(switchPin) == LOW) { //pressed
    digitalWrite(ledPin, LOW);
    for (int i = 0; i < 75; i++) {
      digitalWrite(servoPin, HIGH);
      delayMicroseconds(down);
      digitalWrite(servoPin, LOW);
      delay(20);//50HZ
    }
    for (int i = 0; i < 63; i++) {
      digitalWrite(servoPin, HIGH);
      delayMicroseconds(up);
      digitalWrite(servoPin, LOW);
      delay(20);//50HZ
    }
  } else { //not pressed
    digitalWrite(ledPin, HIGH);
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(up);
    digitalWrite(servoPin, LOW);
    delay(20);//50HZ
  }
}
