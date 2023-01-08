// Name: Obaid-Ur-Rahman Siddiqui
// Reg No. : L1S19BSCS0001

#include <IRremote.h> 

int staticpin=5;
int RECV_PIN = 11;
int brightness=0;
IRrecv irrecv(RECV_PIN);
decode_results results; 

void setup()
{
  Serial.begin(9600);  
  irrecv.enableIRIn();
  pinMode(5, OUTPUT); // RED
  pinMode(6, OUTPUT); // Blue
  pinMode(9, OUTPUT); // Green
  pinMode(11,INPUT);
  digitalWrite(9,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}

void loop()
{
  if (irrecv.decode(&results)) 
  {
    Serial.println(results.value);
    if(results.value == 16601263)
    {
      if(brightness<255)
      {
      brightness = brightness+36.5;
        if(brightness>255)
        {
          brightness=255;
        }
      }
      analogWrite(staticpin,brightness);
      delay(50);
   	} 
    else if(results.value == 16584943)
    {
      analogWrite(5,0);
      analogWrite(6,0);
      analogWrite(9,0);
      if(brightness>0)
      {
        brightness= brightness-36.5;
        if(brightness<0)
        {
          brightness=0;
        }
      }
      analogWrite(staticpin,brightness);
      delay(50);
   	} 
    else if( results.value == 16605343 )
    {
    //  brightness=0;
     if(staticpin==5)
     {
       analogWrite(5,0);
       analogWrite(9,0);
       staticpin=6;
     }
      else if(staticpin==6)
      {
        analogWrite(5,0);
      analogWrite(6,0);
        staticpin=9;
      }
      else if(staticpin==9)
      {
       analogWrite(6,0);
       analogWrite(9,0);
       staticpin=5; 
      }
      analogWrite(staticpin,brightness);
      delay(50);
    }
    irrecv.resume(); 
  }
  delay(100);
}
