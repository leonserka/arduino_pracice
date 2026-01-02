

int broj0[]={1,1,1,1,1,1,0,0};
int broj1[]={1,1,1,0,0,1,1,1};
int broj2[]={0,1,1,0,0,0,0,0};
int broj3[]={0,1,1,0,0,0,0,1};

int pin;
int kasnjenje = 1;
int pot;
void setup() { 
pinMode(A2, INPUT);
pinMode(A0, OUTPUT);
pinMode(A4, OUTPUT);
digitalWrite(A0, LOW);
digitalWrite(A4, HIGH);

  for(pin=2; pin<=13; pin++){ 
    pinMode(pin,OUTPUT); 
    digitalWrite(pin,0); 
  }
  for(pin=11; pin<=13; pin++) {
    digitalWrite(pin,1);  
  }
  Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
kasnjenje = map(analogRead(A2), 0, 1023, 1, 200);
for (pin = 2; pin<=9; pin++) {
digitalWrite(pin, broj0[pin-2]);
}
digitalWrite(13, 0);
delay(kasnjenje);
digitalWrite(13,1);
for (pin = 2; pin<=9; pin++) {
digitalWrite(pin, broj1[pin-2]);
}
digitalWrite(12, 0);
delay(kasnjenje);
digitalWrite(12,1);
for (pin = 2; pin<=9; pin++) {
digitalWrite(pin, broj2[pin-2]);
}
digitalWrite(11, 0);
delay(kasnjenje);
digitalWrite(11,1);
for (pin = 2; pin<=9; pin++) {
digitalWrite(pin, broj3[pin-2]);
}
digitalWrite(10, 0);
delay(kasnjenje);
digitalWrite(10,1);
}