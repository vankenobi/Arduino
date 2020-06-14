#define ag_ismi "WiFi_Ismi"
#define ag_sifresi "WiFi_Sifresi"
void setup()
{
  Serial.begin(115200); //Seriport'u açıyoruz. Güncellediğimiz 
                        //ESP modülünün baudRate değeri 115200 olduğu için bizde Seriport'u 115200 şeklinde seçiyoruz
  Serial.println("AT"); //ESP modülümüz ile bağlantı kurulup kurulmadığını kontrol ediyoruz.
  
  delay(3000); //ESP ile iletişim için 3 saniye bekliyoruz.
 
  if(Serial.find("OK")){         //esp modülü ile bağlantıyı kurabilmişsek modül "AT" komutuna "OK" komutu ile geri dönüş yapıyor.
     Serial.println("AT+CWMODE=1"); //esp modülümüzün WiFi modunu STA şekline getiriyoruz. Bu mod ile modülümüz başka ağlara bağlanabilecek.
     delay(2000);
     String baglantiKomutu=String("AT+CWJAP=\"")+ag_ismi+"\",\""+ag_sifresi+"\"";
    Serial.println(baglantiKomutu);
    
     delay(5000);
 }
 
   Serial.print("AT+CIPMUX=1\r\n"); //modülümüzü TCP/UDP bağlantısına sokuyoruz.
   delay(200);
   Serial.print("AT+CIPSERVER=1,80\r\n"); //Sunucumuzu 80 portunda açıyoruz
   delay(1000);
}

void loop(){
  if(Serial.available()>0){  //Eğer gelen veri varsa gir
    if(Serial.find("+IPD,")){  //Gelen verinin içerisinde "+IPD" komutu geçiyorsa gir
      String metin = "<head> <h1>Merhaba Dunya</h1> </head>";   // Sunucuya yazdırılacak yazı
      String yollanacak_komut = "AT+CIPSEND=";  //yollayacağımız komutun boyutunu söylediğimiz kısım.
      yollanacak_komut +="0";
      yollanacak_komut +=",";
      yollanacak_komut += metin.length(); //yollayacağımız yazının uzunluğunu belirliyor.
      yollanacak_komut += "\r\n";
      Serial.print(yollanacak_komut);
      delay(500);
      Serial.println(metin);
      delay(1000);
      Serial.println("AT+CIPCLOSE=0"); //Server'ı kapatıyoruz.
    }
  }
}
