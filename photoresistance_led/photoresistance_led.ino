int analogPin = A0;
int analogValue = 0;
int ledPin = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  analogValue = analogRead(analogPin);
  Serial.println(analogValue);
  if (analogValue > 100)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
