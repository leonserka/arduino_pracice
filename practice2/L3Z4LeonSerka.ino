

int broj0[]={1,1,1,1,1,1,0,0};
int broj1[]={1,1,1,0,0,1,1,1};
int broj2[]={0,1,1,0,0,0,0,0};
int broj3[]={0,1,1,0,0,0,0,1};

int pin;

void setup() { 
  for(pin=2; pin<=13; pin++){ 
    pinMode(pin,OUTPUT); 
    digitalWrite(pin,0); 
  }
  for(pin=11; pin<=13; pin++) {
    digitalWrite(pin,1);  
  }
}

void loop() { 
  for(pin=2; pin<=9; pin++) {  
    digitalWrite(pin,broj0[pin-2]); 
  }
  delay(1000); 

  for(pin=2; pin<=9; pin++) {  
    digitalWrite(pin,broj1[pin-2]); 
  }
  delay(1000);  

  for(pin=2; pin<=9; pin++) {   
    digitalWrite(pin,broj2[pin-2]);
  }
  delay(1000);  

  for(pin=2; pin<=9; pin++) {   
    digitalWrite(pin,broj3[pin-2]); 
  }
  delay(1000); 
}
