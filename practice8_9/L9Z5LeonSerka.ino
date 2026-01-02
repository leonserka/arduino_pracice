#include <dht.h>
#include <LiquidCrystal.h>
dht DHT;

#define DHT11_PIN A0
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  DHT.read11(DHT11_PIN);
  lcd.setCursor(0, 0);
  lcd.print("Temp(");
  lcd.print("\337");
  lcd.print("C)");
  lcd.print(DHT.temperature, 1);
  
  String odjeca;
  if (DHT.temperature >= 24) {
    odjeca = "Kratki rukavi";
  } else if (DHT.temperature >= 10) {
    odjeca = "Dugi rukavi";
  } else if (DHT.temperature >= 5) {
    odjeca = "Jakna";
  } else {
    odjeca = "Kaput";
  }
  lcd.print(" | Odjeca: ");
  Serial.print(odjeca);

  lcd.setCursor(0, 1);
  lcd.print("Humid(%): ");
  lcd.print(DHT.humidity, 1);

  lcd.print(" | ");
  lcd.print(odjeca);

    for (int pc = 0; pc < 16; pc++){
    lcd.scrollDisplayLeft(); 
    delay(600);
  }

  for (int pc = 0; pc < 16; pc++){
    lcd.scrollDisplayRight(); 
    delay(600);
  }

  delay(5000);
}