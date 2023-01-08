int celsius=0;
int value=0;
int fahrenheit = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  celsius = map(((analogRead(A0))), 0, 1023, 30, 70);
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print("Fahrenheit : "); 
  Serial.println(fahrenheit);
  if(fahrenheit<90)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(2,HIGH);  
  }
  else if(fahrenheit>=90 && fahrenheit<=100)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(5,LOW);
    digitalWrite(2,HIGH);
  }
  else if(fahrenheit>100)
  {
   digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(2,LOW);
  }
  delay(100);
}
