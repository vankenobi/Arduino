int leds = 4,ledm = 5, ledy = 6, ledk = 7, ledb = 8;
void setup() {
  pinMode(leds,OUTPUT);
  pinMode(ledm,OUTPUT);
  pinMode(ledy,OUTPUT);
  pinMode(ledk,OUTPUT);
  pinMode(ledb,OUTPUT);

}

void loop() {
  for(int i=4;i<=8;i++) 
  {
  digitalWrite(i,HIGH); 
  delay(75); 
  }
  for(int i = 4;i<=8;i++)
  {
  digitalWrite(i,LOW);  
  delay(75);
  }
}
