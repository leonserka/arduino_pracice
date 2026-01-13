void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  int light_mapped = map(light,0,1023,0,100);
  Serial.print(light );     
  Serial.println(light_mapped);   // pokrive  daje 10-30, pod svjetlom mobitela daje 62000
  delay(1000);
}
