const int trigPin=4;
const int echoPin=5;

long duration;
int distance;
void setup() {
  
pinMode(2,OUTPUT);
pinMode(18,OUTPUT);
pinMode(19,OUTPUT);
pinMode(21,OUTPUT);
pinMode(23,OUTPUT);
pinMode(5,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(115200);
}

void loop() {
  int a=digitalRead(5);
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);

digitalWrite(trigPin,LOW);

duration=pulseIn(echoPin,HIGH);
distance=duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);
if (distance<=1000)
{
  digitalWrite(18,HIGH);
  delay(100);
}
 else if (distance<=500 && distance>=1000)
{
  digitalWrite(19,HIGH);
  delay(100);
}
 else if (distance<=2000 && distance>=1500 )
{
  digitalWrite(21,HIGH);
  delay(100);
}
 else if (distance<=3000 && distance>=2500 )
{
  digitalWrite(23,HIGH);
  delay(100);
}
else
{
  digitalWrite(18,LOW);
  delay(100);
}
}
