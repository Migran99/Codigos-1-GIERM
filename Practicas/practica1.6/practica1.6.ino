const int  pinY = 12;
const int  pinW = 11;
const int  pinB = 10;
const int  pinR = 9;
const int  potPin = A0;

int potVal = 0;

void setup() {
 pinMode(pinY, OUTPUT);
 pinMode(pinW, OUTPUT);
 pinMode(pinB, OUTPUT);
 pinMode(pinR, OUTPUT);

 Serial.begin(9600);

}

void loop() {
  for(int i = 12; i >= 9; i--){
    digitalWrite(i, HIGH);
    delay(250);
    digitalWrite(i, LOW);
    delay(250);
    }
    for(int i = 10; i <= 11; i++){
    digitalWrite(i, HIGH);
    delay(250);
    digitalWrite(i, LOW);
    delay(250);
    }

}
