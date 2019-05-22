void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int a=digitalRead(4);
  Serial.println(a);
  // put your main code here, to run repeatedly:  int a=digitalRead(5);
  if(a==HIGH)
  {
  Serial.println("PERSON DETECTED");
  
  
  }

  else
  {
     Serial.println("PERSON  NOT DETECTED");
  
  }

}
