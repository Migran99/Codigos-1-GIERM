const int butPin = 2;
int p0;
int p;
long cont=0;
void setup() {
  Serial.begin(9600);
  pinMode(butPin, INPUT);
  p0 = 0;
}

void loop() {
  p = digitalRead(butPin);
  if(p == 1){
      if(p0 == 0){
          //PICO SUBIDA
          cont = 0;
        }
      if(p0 == 1){
          //ARRIBA
          cont++;
        }
    }
  else{
       if(p0 == 0){
          //ABAJO
        }
      if(p0 == 1){
          //PICO BAJADA
          Serial.print("Veces: ");
          Serial.println(cont);
        }
    }
    p0 = p;

delay(1);
}
