void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
pinMode(34,INPUT);
Serial.begin(115200);

}

void loop() {
  int a=analogRead(34);
  Serial.println(a);
  // put your main code here, to run repeatedly:  int a=digitalRead(5);
  if(a>=150)
  {
 
  digitalWrite(4,HIGH);
  delay(100);
  }

  else
  {
  digitalWrite(4,LOW);
  delay(100);
  }



}
