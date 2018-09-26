int sensorpin = 2;
int sensorvalue ;
int ledpin = 13;
void setup()
{
 Serial.begin(9600);
 pinMode(sensorpin,INPUT);
 pinMode(ledpin,OUTPUT);
}
void loop()
{
  sensorvalue = digitalRead(sensorpin);
  if(sensorvalue == 1)
  {
   Serial.println("toprak nemli degil ");
   digitalWrite(ledpin,HIGH);
   delay(1000);
   
  }
  else
  
  Serial.println("Toprak nemli  ");
  digitalWrite(ledpin,LOW);
  delay(200);

}
