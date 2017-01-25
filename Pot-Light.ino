int potPin =2;
int val=0;
int mapped=0;
int LEDarray[]={0,2,3,4,5,6,7,8,9};
int count=0;

void setup() {
 for(count=0;count<9;count++){
    pinMode(LEDarray[count],OUTPUT);
}}

void loop() {
val=analogRead(potPin);
mapped=map(val,0,1024,0,9);
digitalWrite(LEDarray[mapped],HIGH);
digitalWrite(LEDarray[mapped-1],LOW);
}

