int LEDPin1 = 2;

void setup() {
  pinMode(LEDPin1, OUTPUT);
  digitalWrite(LEDPin1, LOW);
}

void loop() {
  digitalWrite(LEDPin1, HIGH);
  delay(500);
  digitalWrite(LEDPin1, LOW);
  delay(500);
}
