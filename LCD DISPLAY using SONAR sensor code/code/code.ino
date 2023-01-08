#include <LiquidCrystal.h>

#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define E 8
#define RS 9

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  return pulseIn(echoPin, HIGH);
}

LiquidCrystal LCD(RS, E, D4, D5, D6, D7);  
int inches = 0;
int cm = 0;
void setup() 
{ 
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(11,INPUT);
  LCD.begin(16,2); 
}
 
void loop() 
{
    cm = 0.01723 * readUltrasonicDistance(12,11);
    inches = (cm / 2.54); 
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.println("cm");
    LCD.setCursor(0,0);
    LCD.print("Centimeter : ");
    LCD.print(cm);
    LCD.setCursor(0,1);
    LCD.print("Inches : ");
    LCD.print(inches);
    delay(1000);  
    LCD.clear();
}
