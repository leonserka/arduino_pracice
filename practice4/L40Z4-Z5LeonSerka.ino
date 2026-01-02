// nožice potenciometra na A0, A2 i A4
// A0-GND, A4-Vcc, A2-signal
int pot;
void setup() { // konfiguracija, izvrsi se jednom
  pinMode(A2,INPUT); // A2 kao ulaz
  pinMode(A0,OUTPUT); //A0 kao izlaz
  pinMode(A4,OUTPUT); //A4 kao izlaz
  digitalWrite(A0,LOW); //A0 kao GND
  digitalWrite(A4,HIGH);//A4 kao Vcc
  Serial.begin(9600);
}
void loop() { // ponavlja se dok je ukljucen
  pot=map(analogRead(A2), 0, 1023, 0, 80); //čita vrijednost na A2
  analogWrite(11, pot);
  Serial.println(pot);//ispisuje na serijski port
  delay(500); //pauza
}
