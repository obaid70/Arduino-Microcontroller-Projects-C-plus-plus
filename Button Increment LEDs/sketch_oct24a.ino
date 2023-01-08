int buttonState=0;
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,INPUT);
}

void loop() {
if(digitalRead(8)==HIGH)
{
  buttonState++;
  Serial.print(buttonState);
  delay(350);
}
if(buttonState==1)
{
  digitalWrite(2,HIGH);
}
else if(buttonState==2)
{
  digitalWrite(3,HIGH);
}
else if(buttonState==3)
{
  digitalWrite(4,HIGH);
}
else if(buttonState==4)
{
  digitalWrite(5,HIGH);
}
else if(buttonState==5)
{
  digitalWrite(6,HIGH);
}
else if(buttonState==6)
{
  digitalWrite(7,HIGH);
}
else if(buttonState==7)
{
  buttonState=0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
}
