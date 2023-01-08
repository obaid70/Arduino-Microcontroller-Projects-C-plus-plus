int value=0;

void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
 value = digitalRead(7);
  Serial.println(value);
  if(value==1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
   digitalWrite(13,LOW); 
  }
  delay(10); // Wait for 100 millisecond(s)
}
