void setup() {
Serial.begin(9600);
}

void loop() {
float t = 17.0;
int p = 1013;
int h = 37;

Serial.println("*****************");
Serial.print("Temperatura: ");
Serial.print(t);
Serial.println("°C");

Serial.print("Tlak: ");
Serial.print(p);
Serial.println(" hPa");

Serial.print("Vlaga: ");
Serial.print(h);
Serial.println(" %");

Serial.println("*****************");

delay(15000);
}