int ledler[] = {4,5,6,7,8};

void setup() {
  for(int k = 0;k<5;k++)
  {
    pinMode(ledler[k],OUTPUT);
  }
}

void loop() {
  for(int i =0; i<5;i++)
  {
  digitalWrite(ledler[i],HIGH);
  delay(50);  
  }
for(int i =0; i<5;i++)
  {
  digitalWrite(ledler[i],LOW);
  delay(50);  
  }
}
