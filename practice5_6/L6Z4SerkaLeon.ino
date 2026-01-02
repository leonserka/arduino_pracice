#include <Servo.h>
Servo myservo;

int val;

void setup() {
  myservo.attach(9);
}

void loop() {
  for (int i = 90; i <= 120; i++) {
    myservo.write(i);
    delay(30);
  }

  for (int i = 120; i >= 60; i--) {
    myservo.write(i);
    delay(30);
  }

  for (int i = 60; i < 90; i++) {
    myservo.write(i);
    delay(30);
  }
  
}