//c++ code
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // put y our main code here, to run repeatedly:
  int valor = analogRead(A0);
  Serial.println(valor);

  if(valor>=0 && valor<150){
    digitalWrite(2,LOW);
  }
   if(valor>150 && valor<300){
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);
    
  }
   if(valor>350 && valor<500){
    digitalWrite(2,HIGH);
    delay(300);
    digitalWrite(2,LOW);
    delay(300);
  }
   if(valor>350 && valor<=650){
    digitalWrite(2,HIGH);
  }
  
}
