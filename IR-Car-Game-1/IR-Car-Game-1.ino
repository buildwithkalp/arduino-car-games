int irSensorPin = 2;
int lastState = HIGH;

void setup() {
  pinMode(irSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int currentState = digitalRead(irSensorPin);

  if (currentState != lastState) {
    if (currentState == LOW) {
      Serial.println("1"); // car entered
    } else {
      Serial.println("0"); // car left
    }
    lastState = currentState;
    delay(50);
  }
}
