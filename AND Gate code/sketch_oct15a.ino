void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
   digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(10, HIGH);
  digitalWrite(6, LOW);
   digitalWrite(13, LOW);
   delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
   digitalWrite(13, LOW);
   delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
   digitalWrite(13, HIGH);
   delay(1000); // Wait for 1000 millisecond(s)
}
