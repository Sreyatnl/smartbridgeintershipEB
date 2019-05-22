
#include<Servo.h>
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
Servo myservo;
int pos=0;
void setup() {
  // put your main code here, to run repeatedly:
  // put your setup code here, to run once:
  myservo.attach(13);
   pinMode(2,OUTPUT);
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
 Serial.print("distance:");
  Serial.println(distance);
  // put your main code here, to run repeatedly:
  // put your main code here, to run repeatedly:
  if(distance<=7){
  for(pos=0;pos<=180;pos+=1)
  {
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
    
  }
  }
  else{
   for(pos=180;pos>=0;pos-=1)
   {
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
   }
  }

}
