const int trigPin = A1;
const int echoPin = A2;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:

  pinMode(A0, OUTPUT);
  pinMode(A3, OUTPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A3, LOW);

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;

  Serial.print("Udaljenost: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
