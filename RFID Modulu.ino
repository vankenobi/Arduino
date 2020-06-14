#include <SPI.h> // Haberleşme  için SPI kütüphanesini eklememiz gerekiyor.
#include <RFID.h> // Modülümüzün kütüphanesi ekliyoruz.  
const byte kirmizi_led = 3 ;
const byte yesil_led =2 ;
RFID rfid(10,9);
byte kart[5] = {117,32,212,101,228}; 
boolean izin = true;
void setup() 
{
  Serial.begin(9600);
  SPI.begin(); //SPI haberleşmeyi başlatıyoruz.
  rfid.init(); 
  pinMode(kirmizi_led, OUTPUT);
  pinMode(yesil_led, OUTPUT);
}
void loop() 
{
  izin=true;
  if(rfid.isCard())
  {
    if(rfid.readCardSerial())
    {
      Serial.print("Kart bulundu ID: ");
      Serial.print(rfid.serNum[0]);
      Serial.print(",");
      Serial.print(rfid.serNum[1]);
      Serial.print(",");
      Serial.print(rfid.serNum[2]);
      Serial.print(",");
      Serial.print(rfid.serNum[3]);
      Serial.print(",");
      Serial.println(rfid.serNum[4]);
    }
    for(int i=0; i<5; i++)
    {
      if(rfid.serNum[i] != kart[i])
      {
        izin = false;
      }
    }
    if(izin==true)
    {
      Serial.println("izin Verildi");
      digitalWrite(yesil_led, HIGH);
      delay(300);
      digitalWrite(yesil_led, LOW);
    }
    else
    {
     Serial.println("izinsiz Giris");
     digitalWrite(kirmizi_led, HIGH);
     delay(300);
     digitalWrite(kirmizi_led, LOW);
    }
    
    rfid.halt();
  }
}
