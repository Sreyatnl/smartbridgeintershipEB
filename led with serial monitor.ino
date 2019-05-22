void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
Serial.begin(115200);
}

void loop() {
  Serial.println("high");
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(100);

Serial.println("low");
  digitalWrite(2,LOW);
  delay(100);


}
