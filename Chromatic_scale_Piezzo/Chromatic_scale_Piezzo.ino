int piezzoPin = 9;
int Do = 131;
int Dod = 139;
int Re = 147; 
int Red = 156;
int Mi = 165; 
int Fa = 175;
int Fad = 185;
int Sol = 196;
int Sold = 208;
int La = 220; 
int Lad = 233;
int Si = 247;

void setup() {
  pinMode(piezzoPin, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  /*
  tone(piezzoPin, Do);
  delay(500);
  Serial.println("Do is played");
  delay(500);
  tone(piezzoPin, Dod);
  delay(500);
  Serial.println("Do# is played");
  delay(500);
  tone(piezzoPin, Re);
  delay(500);
  Serial.println("Re is played");
  delay(500);
  tone(piezzoPin, Red);
  delay(500);
  Serial.println("Re# is played");
  delay(500);
  tone(piezzoPin, Mi);
  delay(500);
  Serial.println("Mi is played");
  delay(500);
  tone(piezzoPin, Fa);
  delay(500);
  Serial.println("Fa is played");
  delay(500);
  tone(piezzoPin, Fad);
  delay(500);
  Serial.println("Fa# is played");
  delay(500);
  tone(piezzoPin, Sol);
  delay(500);
  Serial.println("Sol is played");
  delay(500);
  tone(piezzoPin, Sold);
  delay(500);
  Serial.println("Sol# is played");
  delay(500);
  tone(piezzoPin, La);
  delay(500);
  Serial.println("La is played");
  delay(500);
  tone(piezzoPin, Lad);
  delay(500);
  Serial.println("La# is played");
  delay(500);
  tone(piezzoPin, Si);
  delay(500);
  Serial.println("Si is played");
  delay(500);
  */

 while(1 == 1){
  for(int i = 1; i < 15804; i += 1 ){
    tone(piezzoPin, i);
    delay(100);
    Serial.println(i);
  }
  
 }

}
