const int butPin1 = 2;
const int butPin2 = 3;
int p10;
int p1;

int p20;
int p2;

long cont=0;


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
        }
    }
    if(p2 == 1){
      if(p20 == 0){
          //PICO SUBIDA
          Serial.print("Contador: ");
          Serial.println(cont);
          printNum(cont);
          cont = 0;
          delay(20);
        }
    }
    
p10 = p1;
p20 = p2;

delay(1);
}
