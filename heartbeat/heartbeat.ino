void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  double time = millis()/ 1000.0;
  Serial.print(time);
  Serial.println(" sec have elapsed");
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  
}
