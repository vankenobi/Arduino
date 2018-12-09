int veri;
void setup() {
  Serial.begin(9600);
  

}

void loop() {
 if(Serial.available()) //Seri ekran girdi değerinin olup olmadığını kontrol et
 //eğer girdi varsa oku ve yazdır.
 {
   veri = Serial.read(); 
   Serial.print("Alinan Deger : ");
   Serial.print (veri);
   Serial.print(" - Alinan Degeri Char olarak Yazdırma: ");
   Serial.println((char)veri);
   
 }

}
