const int trigPin=4;
const int echoPin=5;

long duration;
int distance;
void setup() {
  
pinMode(2,OUTPUT);
pinMode(18,OUTPUT);

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

else
{
  digitalWrite(18,LOW);
  delay(100);
}
}
