int speakerPin = 9;
int length = 44;
char notes[]="eeefeddgs eeeefeeeeds eeefeees eeefeeefeees eeefeee";
int beats[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int tempo = 100;

void playTone(int tone, int duration){
  for(long i=0;i<duration*1000L; i += tone*2){
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin,LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration){
char names[] = { 'c','d','e','f','g','a','b','C','s'};
int tones[]={1915,1700,1519,1432,1275,1136,1014,956,0};

  for (int i = 0; i < 8; i++) { if (names[i] == note) {
playTone(tones[i], duration); 
}
  }
}
void setup() {
pinMode(speakerPin,OUTPUT);
}

void loop() {
for (int i = 0; i < length; i++) {
if (notes[i] == ' ') { delay(beats[i] * tempo); // rest
} else {
playNote(notes[i], beats[i] * tempo);
}
// pause between notes
delay(tempo/2);
}}
