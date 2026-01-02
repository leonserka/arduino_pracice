#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include <dht.h>
const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define btrx 3
#define bttx 2
String message = "";

SoftwareSerial mySerial(btrx, bttx);

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
Serial.println("Initializing...");
Serial.println("The device started, now you can pair it with bluetooth!");
lcd.begin(16, 2);
}

void loop() {
if (mySerial.available()) {
char incomingChar = mySerial.read();
if (incomingChar != 'X') {
message += String(incomingChar);
}
else {
message = "";
Serial.println();
}
Serial.write(incomingChar);
}
if (!message.endsWith("x")) {
lcd.setCursor(0, 0);
lcd.print(message);
}
else {
lcd.clear();
message="";
}
}