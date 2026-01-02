#include <dht.h>

dht DHT;

#define DHT11_PIN A0

void setup()
{
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  Serial.begin(9600);
  Serial.println();
}

void loop()
{
  DHT.read11(DHT11_PIN);
  Serial.print("Temperatura: ");
  Serial.println(DHT.temperature, 1);
  Serial.print("Vlaga: ");
  Serial.println(DHT.humidity, 1);
  delay(5000);
}