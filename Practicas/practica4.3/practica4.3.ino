const int butPin1 = 2;
const int butPin2 = 3;
int p10;
int p1;

int p20;
int p2;

int cont=0;
int cifra = 0;
long DNIn=0;
char DNIl;
void setup() {
  Serial.begin(9600);
  pinMode(butPin1, INPUT);
  pinMode(butPin2, INPUT);
  while(!Serial);
  Serial.println("SERIAL ABIERTO");
  p10 = 0;
  p20 = 0;
}

void loop() {
  p1 = digitalRead(butPin1);
  p2 = digitalRead(butPin2);
  if(p1 == 1){
      if(p10 == 0){
          //PICO SUBIDA
          cont++;
          if(cont == 10) cont-=10;
          delay(20);
          Serial.print("Numero: ");
          Serial.println(cont);
        }
    }
    if(p2 == 1){
      if(p20 == 0){
          //PICO SUBIDA
          DNIn = DNIn*10;
          DNIn += cont;
          Serial.print("Cifras: ");
          Serial.println(DNIn);
          cont = 0;
          cifra++;
          delay(20);
        }
    }

    if(cifra == 8){
        DNIl = letraDNI(DNIn);
        Serial.print("EL DNI ES: ");
        Serial.print(DNIn);
        Serial.println(DNIl);

        cifra = 0;
        DNIn = 0;
      }
    
p10 = p1;
p20 = p2;

delay(1);
}
