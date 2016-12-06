#include <Servo.h>
Servo myservo;
int pos=0;
int potPin = 2;
int val = 0; 


void setup() {
  // put your setup code here, to run once:
myservo.attach(13);
Serial.begin(9600);
}

void loop() {
val = analogRead(potPin);
pos = map(val,0,1023,0,180);
myservo.write(pos);
}
