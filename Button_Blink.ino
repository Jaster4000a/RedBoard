/*
 * Button
 * by DojoDave <http://www.0j0.org>
 *
 * Turns on and off a light emitting diode(LED) connected to digital
when pressing a pushbutton attached to pin 7.  *
 * http://www.arduino.cc/en/Tutorial/Button
 */
int yes= 7;
int no=6;
int inputPin1 = 2;
int inputPin2 = 3;
int inputPin3 = 4;
int inputPin4 = 5;
int Speaker=8;
int val1=0;
int val2=0;
int val3=0;
int val4=0;


void setup() {
  pinMode(yes, OUTPUT);
  pinMode(no, OUTPUT);
  pinMode(Speaker, OUTPUT);
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
  pinMode(inputPin4, INPUT);
}

void loop(){
  
  val1=digitalRead(inputPin1);
  val2=digitalRead(inputPin2);
  val3=digitalRead(inputPin3);
  val4=digitalRead(inputPin4);

if(val1==LOW && val3==LOW){
  digitalWrite(no,LOW);
  digitalWrite(yes,HIGH);
  tone(Speaker,1915,500);
}else{
  digitalWrite(no, HIGH);
  digitalWrite(yes,LOW);
  
}
delay(100);
}


