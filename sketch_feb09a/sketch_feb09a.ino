int sensorPin = A2;



void setup() {
  Serial.begin(9600);
  
}

void loop() {
  float sensorVal = analogRead(sensorPin);
  float voltage = (sensorVal/1024.0)*5000;
  float temperature = (voltage-500) / 10;
 
  Serial.println(temperature);
  delay(1000);

}
