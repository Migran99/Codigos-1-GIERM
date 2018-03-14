const int  pinY = 12;
const int  pinW = 11;
const int  pinB = 10;
const int  pinR = 9;
const int  potPin = A0;

int potVal = 0;
int delTime = 250;

void setup() {
 pinMode(pinY, OUTPUT);
 pinMode(pinW, OUTPUT);
 pinMode(pinB, OUTPUT);
 pinMode(pinR, OUTPUT);

 Serial.begin(9600);

}
void cambiarDelay(){
  delTime = map(analogRead(potPin), 0, 1023, 100, 1000);
  }

void loop() {
  for(int i = 12; i >= 9; i--){
    cambiarDelay();
    digitalWrite(i, HIGH);
    delay(delTime);
    digitalWrite(i, LOW);
    delay(delTime);
    }
    for(int i = 10; i <= 11; i++){
    cambiarDelay();
    digitalWrite(i, HIGH);
    delay(delTime);
    digitalWrite(i, LOW);
    delay(delTime);
    }

}
