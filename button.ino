void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(5,INPUT);
}

void loop() {
  int a=digitalRead(5);
  if(a==LOW)
  {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);
  delay(100);
  }

  else
  {
  digitalWrite(4,LOW);
  delay(100);
  }

}
