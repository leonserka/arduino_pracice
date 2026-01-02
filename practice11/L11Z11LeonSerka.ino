#include <dht.h>
#include dht DHT;
#define DHT11_PIN A0
#define btrx 3
#define bttx 2

SoftwareSerial mySerial(btrx, bttx);

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
Serial.println("Initializing...");
Serial.println("The device started, now you can pair it with bluetooth!");
pinMode(A2, OUTPUT);
pinMode(A1, OUTPUT);
digitalWrite(A1, HIGH);
digitalWrite(A2, LOW);
Serial.begin(9600);
}

void loop() {
DHT.read11(DHT11_PIN);
Serial.print(DHT.humidity,1);
mySerial.println(DHT.humidity,1);
delay(5000);
}