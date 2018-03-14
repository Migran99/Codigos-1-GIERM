// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int ledPin[4] ={7,8,9,10};
const int potPin = A0;

int bin[4];

int potVal;

int pass[4];
int cont = 0;

int contra[4] = {0,0,0,0};

unsigned long tim;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  lcd.begin(16, 2);
  potVal = analogRead(potPin);
  potVal = map(potVal, 0, 1023, 0, 15);

  tim = millis();
  
}

void pasarBin(int x){
    for(int i = 3; i >= 0; i--){
        bin[i] = x%2;
        x = x/2;
      }
     for(int i = 0; i < 4; i++){
        Serial.print(bin[i]);
      }
      Serial.println("");
  }


void loop() {  
 if(cont < 4){
     if(potVal == pass[cont]){
      if(millis() - tim >= 3000){
          Serial.println(pass[cont]);
          cont++;
          tim = millis();
        }
    }
    else{
        pass[cont] = potVal;
      }
  }
  else{
      Serial.print("Hecho, la pass es: ");
      for(int i = 0; i < 4; i++){
          Serial.print(pass[i]);
          Serial.print(" - ");
        }
        Serial.println("");
        cont = 0;
        
        lcd.clear();
        lcd.setCursor(0,0);
        if(pass[0] == contra[0] && pass[1] == contra[1] && pass[2] == contra[2] && pass[3] == contra[3]){
            lcd.print("CORRECTO!");
          }
          else{
            lcd.print("INCORRECTO!");
            }
        delay(5000);
        for(int i = 0; i < 4; i++){
            digitalWrite(ledPin[i], LOW);
          }  
        tim = millis();
      }
    potVal = analogRead(potPin);
    potVal = map(potVal, 0, 1023, 0, 15);
    lcd.clear();
    lcd.setCursor(0,0);
    for(int i = 0; i < cont; i++){
        lcd.print(pass[i]);
        lcd.print(" ");
        digitalWrite(ledPin[i], HIGH);
     }
    lcd.setCursor(0,1);
    lcd.print("Num: ");
    lcd.print(potVal);

    delay(100);
}


