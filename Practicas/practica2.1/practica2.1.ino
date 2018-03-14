/*
  LiquidCrystal Library - Blink

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and makes the
 cursor block blink.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
   * ends to +5V and ground
   * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalBlink

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int ledPin[4] ={7,8,9,10};
const int potPin = A0;

int bin[4];

int potVal;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
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
 potVal = analogRead(potPin);
 potVal = map(potVal, 0, 1023, 0, 15);
 Serial.println(potVal);
 
 pasarBin(potVal);

 for(int i = 0; i < 4; i++){
    digitalWrite(ledPin[i], bin[i]);
  }
  delay(2000);
 
 /*
  lcd.noBlink();
  delay(3000);
  lcd.blink();
  delay(3000);
  */
}


