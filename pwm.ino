const int ledPin=16;
const int freq=5000;
const int ledChannel=0;
const int resolution=8;
void setup() {
  // put your setup code here, to run once:
  ledcSetup(ledChannel,freq,resolution);
  ledcAttachPin(ledPin,ledChannel);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int dutyCycle=0; dutyCycle<=255; dutyCycle++)
  {
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }

}
