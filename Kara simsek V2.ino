void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
 
}

void loop() 
{
 for(int i = 4;i<9;i++)
 {
  for(int k = 0;k<255;k++){
   analogWrite(i,k); 
   delay(5);
  }
 }
 for(int i = 4;i<9;i++)
 {
  for(int k = 255;k>0;k--){
   analogWrite(i,k); 
   delay(5);
  }
 }
  
   

}
