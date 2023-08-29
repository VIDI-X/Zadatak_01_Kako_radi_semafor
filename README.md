# Zadatak_01_Kako_radi_semafor

```C++
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
```

![Blink_a_LED_01](https://github.com/VIDI-X/Zadatak_01_Kako_radi_semafor/assets/68710971/ad4e9db9-4f8f-459f-bf86-a97247566b18)
