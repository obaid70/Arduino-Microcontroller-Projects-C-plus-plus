#include <IRremote.h> 
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results; 

void setup()
{
  Serial.begin(9600);  
  irrecv.enableIRIn();
  pinMode(11,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results)) 
  {
    Serial.println(results.value);
    if(results.value == 16582903 )
    {
      digitalWrite(2,HIGH);
      delay(50);
   	} 
    else if(results.value == 16615543)
    {
      digitalWrite(2,LOW);
      delay(50);
   	} 
    else if( results.value == 16599223 )
    {
      digitalWrite(3,HIGH);
      delay(50);
    }
     else if( results.value == 16591063 )
    {
      digitalWrite(3,LOW);
      delay(50);
    }
     else if( results.value == 16623703 )
    {
      digitalWrite(4,HIGH);
      delay(50);
    }
     else if( results.value == 16607383 )
    {
      digitalWrite(4,LOW);
      delay(50);
    }
    irrecv.resume(); 
  }
  delay(100);
}
