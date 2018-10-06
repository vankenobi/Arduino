#define trig 2
#define echo 3
void setup() 
{
 Serial.begin(9600);
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
}
void loop() 
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2)/(29.1);
  Serial.print("Nesneye olan uzaklık: ");
  Serial.println(mesafe);
  Serial.println("cm");
  delay(500);
  
  
}
//Bu örnekte HC-SR04'ün kullanımını gördük.
