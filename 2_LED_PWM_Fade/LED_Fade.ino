void setup() {
  pinMode(2,OUTPUT);
}

void loop() {
  for (int i=10;i<=255;i+=10){
    analogWrite(2,i);
    delay(100);
  }
  for (int j=255;j>=10;j-=10){
    analogWrite(2,j);
    delay(100);
  }
}
