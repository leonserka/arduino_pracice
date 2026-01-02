#include <SoftwareSerial.h>
#define btrx 3
#define bttx 2
int i = 30;
const int ledPin =13;
String message = "";

SoftwareSerial mySerial(btrx,bttx);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  mySerial.begin(9600);
  Serial.println("Initializing...");
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  mySerial.println(i);
  i+=5;
  delay(500);
}
