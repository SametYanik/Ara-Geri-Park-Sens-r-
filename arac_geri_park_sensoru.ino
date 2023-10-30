int trig=6;
int echo=5;
int led=7;
int buzzer=4;
int sure;
int mesafe;// x(mesafe)= V(hız) x t(zaman)


void setup() {
pinMode(trig,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(3);
digitalWrite(trig,LOW);
sure=pulseIn(echo,HIGH);
mesafe=(sure/2)/29.1;
Serial.print("cisme olan mesafe=");
Serial.print(mesafe);
Serial.println("cm");

if(mesafe<=50 && mesafe>=30){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(600);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(800);
}
if(mesafe<=29 && mesafe>=10){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(600);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(400);
}
if(mesafe<=9 && mesafe>=0){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  
}
else{
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}

}
