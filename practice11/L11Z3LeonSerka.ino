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
  if (mySerial.available()) {
    char incomingChar = mySerial.read();
    if (incomingChar != 'x') {
      message +=  String(incomingChar);
    } else {
      message = "";
      Serial.println();
    }
    Serial.write(incomingChar);
  }

  if (message.endsWith("on")) {
    digitalWrite(13, HIGH);
    message = "";
    Serial.println();
  }
  else if (message.endsWith("off")) {
    digitalWrite(13, LOW);
    message = "";
    Serial.println();
  }
  delay(20);
  //mySerial.println(i);
  //i+=5;
  //delay(500);
}
