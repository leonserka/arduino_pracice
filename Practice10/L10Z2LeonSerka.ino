#include <IRremote.h>

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
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();
  }

  delay(400);
}

// 14:19:31.237 -> The function decode(&results)) is deprecated and may not work as expected! Just use decode() without a parameter and IrReceiver.decodedIRData.<fieldname> .
// 14:19:31.401 -> FFA25D
// 14:19:31.783 -> FF629D
// 14:19:32.968 -> FFE21D
// 14:19:34.580 -> AD6C2F5B
// 14:19:34.948 -> FFFFFFFF
// 14:19:35.387 -> FFC23D
// 14:19:36.188 -> FFE01F
// 14:19:36.545 -> FFA857
// 14:19:36.950 -> FFFFFFFF



