const int  pinY = 12;
const int  pinW = 11;
const int  pinB = 10;
const int  pinR = 9;
const int  potPin = A0;

int potVal = 0;
int ledVal = 255;

void setup() {
 Serial.begin(9600);

}
void cambiarVal(){
  ledVal = map(analogRead(potPin), 0, 1023, 50, 255);
  }

void loop() {
  for(int i = 12; i >= 9; i--){
    cambiarVal();
    analogWrite(i, ledVal);
    delay(250);
    analogWrite(i, 0);
    delay(250);
    }
    for(int i = 10; i <= 11; i++){
    cambiarVal();
    analogWrite(i, ledVal);
    delay(250);
    analogWrite(i, 0);
    delay(250);
    }

}
