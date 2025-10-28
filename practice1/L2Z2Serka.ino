void setup() {
  pinMode(13,OUTPUT);
}
void tocka(){
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
}

void crtica(){
  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(13,LOW);
  delay(400);
}

void loop() {
  tocka();
  tocka();
  tocka();
  delay(400);
  crtica();
  crtica();
  crtica();
  delay(400);
  tocka();
  tocka();
  tocka();
  delay(1000);
}
