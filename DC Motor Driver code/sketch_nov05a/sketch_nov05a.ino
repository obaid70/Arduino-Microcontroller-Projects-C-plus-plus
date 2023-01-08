int key=0;
void setup()
{
  pinMode(13, OUTPUT); // input 1
  pinMode(12,OUTPUT); // input 2
  pinMode(10,OUTPUT); // input 3
  pinMode(11,OUTPUT); // input 4
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
   digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  if(Serial.available()>0)
  {
    key=Serial.read()-'0';
    if(key==1)
    {
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
        Serial.println("Moving Forward.");  
    }
    else if(key==2)
    {
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
      Serial.println("Moving Backward."); 
    }
    else if(key==3)
    {
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
        digitalWrite(13, HIGH);
      Serial.println("Turning Right."); 
    }
    else if(key==4)
    {
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
      digitalWrite(12, LOW);
        digitalWrite(13, HIGH);
      Serial.println("Turning Left.");  
    }
    else
    {
      digitalWrite(10, LOW);
        digitalWrite(11, LOW);
      digitalWrite(12, LOW);
        digitalWrite(13, LOW);
      Serial.println("Parked.");  
    }
  }
}
