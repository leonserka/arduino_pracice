int pin = A0;
void setup() {

  Serial.begin(9600);
}

void loop() {
  int izmjereno = analogRead(pin);
  long napon_akumulatora = map(izmjereno, 0, 1023, 0, 15000);

  float Vin = napon_akumulatora / 1000.0;
  Serial.print("Napon akumulatora:");
  Serial.print(Vin, 2);
  Serial.print(" V ");
  if (Vin < 11.8) {
    Serial.println("Napunite akumulator!");
  }
  else if (Vin > 14.8) {
    Serial.println("Previsok napon!");
  }
  Serial.println();
  delay(5000);
}