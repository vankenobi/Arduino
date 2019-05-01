char veri;
int ledy = 2; //Yesil ledi ikinci digital pine bağladık.
int ledm = 3;  // mavi ledi 3. digital pine bağladık. 



void setup() {
  Serial.begin(9600);
  pinMode(ledy,OUTPUT);
  pinMode(ledm,OUTPUT);
  
  

}

void loop() {
 while(Serial.available()) //Okumak için veri var mı ? 
 // varsa döndür . 
 { 
  veri = Serial.read();  //Seri ekrandan okunan değeri tipi char olan veri değişkenine atıyor.
  
  switch(veri) 
  {
  case 'a':   //Klavyeden küçük a yazıp Enter dediğimizde yeşil led yanıcaktır.
  digitalWrite (ledy,HIGH);
  break;
  case 'b':
  digitalWrite(ledm,HIGH);
  break;   
  case 'A':    //Klavyeden Büyük A yazıp Enter tuşuna bastığımızda yeşil Led sönücektir.
  digitalWrite(ledy,LOW);
  break;
  case 'B':
  digitalWrite(ledm,LOW);
  break;
  }
   
 }
 

}
