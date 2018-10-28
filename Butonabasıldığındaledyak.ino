int buton = 2;
int ledk = 3;
boolean butondurumu = false;
void setup() 
{
  Serial.begin(9600);
  pinMode(buton,INPUT);
  pinMode(ledk,OUTPUT);
}

void loop() 
{
 butondurumu = digitalRead(buton); //Butonun o anki durumunu (yani basılıyomu basılmıyomu durumunu) butondurumu değişkenine ataması)
 if(butondurumu == true){ 
 digitalWrite(ledk,LOW); 
 butondurumu == digitalRead(buton);
 delay(175);
 }
 else 
 digitalWrite(ledk,HIGH);
}
