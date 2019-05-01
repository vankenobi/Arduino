// Değişkenler
int k = 2 ;
bool p = false;
String okunan;
void setup()
{
  Serial.begin(9600);
  pinMode(k, OUTPUT);
}

void loop() {
  while (Serial.available() > 0)
  {
    okunan = Serial.readString();
    Serial.print("Okunan deger:");
    Serial.println(okunan);
    if (p  == true && okunan == "ac")
      {
        Serial.println("Zaten Acik konumda.");
      }
    else if (okunan == "ac")
    {
      digitalWrite(k, HIGH);
      p = true;
    }
    
    
    if (p == false && okunan == "kapat" )
      {
        Serial.println("Zaten kapali konumda.");
      }
      else if (okunan == "kapat")
    {
      digitalWrite(k, LOW);
      p = false;
    }
  }
}
