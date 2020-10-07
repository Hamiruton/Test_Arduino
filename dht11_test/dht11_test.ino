
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 8

#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

//int analogValue = 0;
//int pinLed = 8;

void setup()
{
  Serial.begin(9600);
  Serial.println("DHTxx test");
  dht.begin();
}

void loop()
{
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" C");
  Serial.print("Humidité: ");
  Serial.print(h);
  Serial.println(" %");
}
