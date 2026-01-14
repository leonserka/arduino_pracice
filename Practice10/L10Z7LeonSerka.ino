// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Correct PIN
const String correctPin = "4567";
String enteredPin = "";

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Display "Pin:" on the first row
  lcd.setCursor(0, 0);
  lcd.print("Pin:");
  
  Serial.println("Unesite PIN (4 znamenke) i pritisnite Enter:");
}

void loop() {
  // Check if data is available from Serial
  if (Serial.available() > 0) {
    char incomingChar = Serial.read();
    
    // Check if Enter key is pressed (newline character)
    if (incomingChar == '\n' || incomingChar == '\r') {
      // Only process if something was entered
      if (enteredPin.length() > 0) {
        // Clear the second row before displaying result
        lcd.setCursor(0, 1);
        lcd.print("                "); // Clear the line
        lcd.setCursor(0, 1);
        
        // Check if the entered PIN is correct
        if (enteredPin == correctPin) {
          lcd.print("Ispravan pin");
          Serial.println("PIN ispravan!");
        } else {
          lcd.print("Neispravan pin");
          Serial.println("PIN neispravan!");
        }
        
        // Reset the entered PIN
        enteredPin = "";
        
        // Wait a few seconds before clearing the second row
        delay(3000);
        
        // Clear the second row
        lcd.setCursor(0, 1);
        lcd.print("                "); // Clear the line
        
        // Prompt for next PIN
        Serial.println("Unesite PIN (4 znamenke) i pritisnite Enter:");
      }
    } else {
      // Add the character to the entered PIN
      enteredPin += incomingChar;
      Serial.print(incomingChar); // Echo the character back to Serial monitor
    }
  }
}
