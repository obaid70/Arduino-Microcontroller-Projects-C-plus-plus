long inches = 0;
long cm = 0;

long calculateTime(int triggerPin, int echoPin)
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT); // Trigger pin of SONAR sensor.
  pinMode(3,INPUT); // ECHO pin of SONAR sensor.
  pinMode(4,OUTPUT); // G pin of 7-Segment Display.
  pinMode(5,OUTPUT); // F pin of 7-Segment Display.
  pinMode(6,OUTPUT); // A pin of 7-Segment Display.
  pinMode(7,OUTPUT); // B pin of 7-Segment Display.
  pinMode(8,OUTPUT); // DP pin of 7-Segment Display.
  pinMode(9,OUTPUT); // C pin of 7-Segment Display.
  pinMode(10,OUTPUT); // D pin of 7-Segment Display.
  pinMode(11,OUTPUT); // E pin of 7-Segment Display.
}

void loop()
{
  cm = 0.01723 * calculateTime(2,3);
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  if(inches >= 0 && inches<1) // Show 0 on 7-Segement Display.
  {
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
  }
  else if(inches >= 1 && inches<2) // Show 1 on 7-Segement Display.
  {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
  }
    else if( inches >= 2 && inches<3) // Show 2 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
  }
      else if( inches >= 3 && inches<4) // Show 3 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
  }
      else if( inches >= 4 && inches<5) // Show 4 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
  }
      else if( inches >= 5 && inches<6) // Show 5 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
  }
      else if( inches >= 6 && inches<7) // Show 6 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
  }
      else if( inches >= 7 && inches<8) // Show 7 on 7-Segement Display.
  {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
  }
      else if( inches >= 8 && inches<9) // Show 8 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
  }
      else if( inches >= 9 && inches<10) // Show 9 on 7-Segement Display.
  {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
  }
  else // Turn the DP Light ON on the 7-Segment Display.
  {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
  }
  delay(200); // Wait for 200 millisecond(s)
}
