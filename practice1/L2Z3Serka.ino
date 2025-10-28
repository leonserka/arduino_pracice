void dot() {
digitalWrite(7, HIGH);
delay(250);
digitalWrite(7, LOW);
delay(250);
}


void dash() {
digitalWrite(12, HIGH);
delay(750);
digitalWrite(12, LOW);
delay(250);
}

void setup() {
pinMode(12, OUTPUT);
}

void loop() {


// L: .-..
dot(); dash(); dot(); dot(); delay(500);

// E: .
dot(); delay(500);

// O: ---
dash(); dash(); dash(); delay(500);

// N: -.
dash(); dot(); delay(500);

delay(1000);

// Š: ----
dash(); dash(); dash(); dash(); delay(500);

// E: .
dot(); delay(500);

// R: .-.
dot(); dash(); dot(); dash(); delay(500);

// K: -.-
dash(); dot(); dash(); delay(500);

// A: .-
dot(); dash(); delay(1000);

delay(1000);
}