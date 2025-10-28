// nožica botuna na D7
// druga nožica botuna na GND
int kasnjenje=2000; // vrijeme kasnjenja 
//1zadatak pritiskom na tipkalo vrjednost skace za , ako drzimo tipkalo samo raste dok ne pustimo tipkalo
// 2 zadatak 180 kasnjenje
// radi usporeno svako 2 sekunde se poveca vrjednost
int brojac=0;
void setup() { // konfiguracija, izvrsi se jednom
  pinMode(7,INPUT_PULLUP); // 7 kao pull-up ulaz
  Serial.begin(9600);
  delay(400);
  Serial.println(brojac);
}
void loop() { // ponavlja se dok je ukljucen
  if(digitalRead(7)==LOW) {
    brojac++;
    Serial.println(brojac);
    delay(kasnjenje);
  }
}
