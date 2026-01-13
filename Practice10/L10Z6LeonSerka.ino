#include <IRremote.h>
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigPin = A1;
const int echoPin = A2;

long duration;
int distance;

int RECV_PIN = A2;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  pinMode(A2, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
   // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)){
    Serial.println(results.value);
    irrecv.resume();
  }
  String button;
  if(results.value == 16753245 ) { button = "Power            ";}
  if(results.value == 16736925 ) { button = "MODE            ";}
  if(results.value == 16769565 ) { button = "MUTE            ";}
  if(results.value == 16720605 ) { button = "Play/Pause            ";}
  if(results.value == 16712445 ) { button = "Rewind            ";}
  if(results.value == 16761405 ) { button = "FFW            ";}
  if(results.value == 16769055 ) { button = "EQ            ";}
  if(results.value == 16754775 ) { button = "-            ";}
  if(results.value == 16748655 ) { button = "+            ";}
  if(results.value == 16738455 ) { button = "0            ";}
  if(results.value == 16750695 ) { button = "Shuffle            ";}
  if(results.value == 16756815 ) { button = "U/SD            ";}
  if(results.value == 16724175 ) { button = "1            ";}
  if(results.value == 16718055 ) { button = "2            ";}
  if(results.value == 16743045 ) { button = "3            ";}
  if(results.value == 16716015 ) { button = "4            ";}
  if(results.value == 16726215 ) { button = "5            ";}
  if(results.value == 16734885 ) { button = "6            ";}
  if(results.value == 16728765 ) { button = "7            ";}
  if(results.value == 16730805 ) { button = "8            ";}
  if(results.value == 16732845 ) { button = "9            ";}

  lcd.setCursor(0, 0);
  lcd.print("Tipka: ");
  lcd.print(button);

  delay(400);
}



