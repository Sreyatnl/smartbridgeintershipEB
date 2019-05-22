const int trigPin=4;
const int echoPin=5;

long duration;
int distance;
void setup() {
  
pinMode(2,OUTPUT);
pinMode(19,OUTPUT);
pinMode(21,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(115200);
}

void loop() {
  
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);

digitalWrite(trigPin,LOW);

duration=pulseIn(echoPin,HIGH);
distance=duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);
if(distance>=9)
{
  digitalWrite(19,HIGH);
  digitalWrite(21,LOW);
}
else
{
  digitalWrite(19,LOW);
  digitalWrite(21,HIGH);
}
}
