#include <Servo.h>
Servo myservo;
int lightPin = 0;

void setup(){
  myservo.attach(9);
}

void loop(){
  int lightLevel = analogRead(lightPin);
  lightLevel=map(lightLevel,0,900,0,180);
  lightLevel = constrain(lightLevel,0,180);
  myservo.write(lightLevel);
  delay(15);
  }

