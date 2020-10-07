int pin2;
int pin8;
int pin13;

void setup()
{
  //Definition variable
  pin2=2;
  pin8=8;
  pin13=12;
  //Initialisation
  pinMode(pin2,OUTPUT);
  pinMode(pin8,OUTPUT);
  pinMode(pin13,OUTPUT);
  //Début
  digitalWrite(pin2,LOW);
  digitalWrite(pin8,LOW);
  digitalWrite(pin13,LOW);
}

void loop()
{
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin8,HIGH);
  delay(1000);
  digitalWrite(pin13,HIGH);
  delay(2000);
  
  digitalWrite(pin2,LOW);
  delay(1000);
  digitalWrite(pin8,LOW);
  delay(1000);
  digitalWrite(pin13,LOW);
}
