const int  pinY = 6;
const int  pinW = 11;
const int  pinB = 10;
const int  pinR = 9;

const int ledPins [4] = {pinY, pinW, pinB, pinR};


const int  potPin = A0;

int potVal = 0;
int delTime = 10;

void setup() {
 Serial.begin(9600);
}

void cambiarDelay(){
  delTime = map(analogRead(potPin), 0, 1023, 1, 10);
  }

void loop() {
  for(int i = 3; i >= 0; i--){
    for(int ledVal = 0; ledVal <= 255; ledVal++){
        cambiarDelay();
        analogWrite(ledPins[i], ledVal);
        delay(delTime);
      }
      for(int ledVal = 255; ledVal >= 0; ledVal--){
        cambiarDelay();
        analogWrite(ledPins[i], ledVal);
        delay(delTime);
      }
    }
    for(int i = 1; i <= 2; i++){
    for(int ledVal = 0; ledVal <= 255; ledVal++){
        cambiarDelay();
        analogWrite(ledPins[i], ledVal);
        delay(delTime);
      }
      for(int ledVal = 255; ledVal >= 0; ledVal--){
        cambiarDelay();
        analogWrite(ledPins[i], ledVal);
        delay(delTime);
      }
    }

}
