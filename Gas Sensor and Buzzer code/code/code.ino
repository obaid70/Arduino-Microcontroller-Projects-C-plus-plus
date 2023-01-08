#include <LiquidCrystal.h>

#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define E 8
#define RS 9

LiquidCrystal LCD(RS, E, D4, D5, D6, D7);  
int intensity=0;
void setup() 
{ 
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
  LCD.begin(16,2); 
}
 
void loop() 
{
  intensity=analogRead(A0);
  Serial.println(intensity);
  LCD.setCursor(0,0);
  LCD.print("Value : ");
  LCD.print(intensity);
  delay(100);	
  LCD.clear();
  intensity = map(((analogRead(A0))), 0, 1023, -455, 251);
  analogWrite(11,intensity); 
}