int ledPin = 9;
void setup()
{
  pinMode(ledPin, OUTPUT);
}
void loop() {
  analogWrite(ledPin, 255/2);
delay(500);
  analogWrite(ledPin,0);
delay(500);
}
