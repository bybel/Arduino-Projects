float distance;
int echoPin = 8;
int trigPin = 7;
float pingTime;
float speedOfSound = 342.3;


void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(15); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent
  delayMicroseconds(10); //Delay in high state

  pingTime = pulseIn(echoPin, HIGH);
  pingTime = pingTime / 1000000;
  distance = pingTime * speedOfSound;
  distance = distance / 2;

  Serial.print("The distance is : ");
  Serial.println(distance);
  delay(250);

  
}
