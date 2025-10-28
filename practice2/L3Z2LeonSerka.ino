void setup() {
  pinMode(11,OUTPUT);


}

void loop() {
  analogWrite(11,255);
  delay(1000);
  //90%,150,58.82%,705.88 mWh
  analogWrite(11,150);
  delay(1000);
  //50%,100,39.21%,470.58 mWh
    analogWrite(11,100);
  delay(1000);
  //25%,60,11.76%,141.18 mWh
    analogWrite(11,30);
  delay(1000);

}
