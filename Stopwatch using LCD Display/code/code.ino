#include <LiquidCrystal.h>

#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define E 8
#define RS 9

LiquidCrystal LCD(RS, E, D4, D5, D6, D7);
int power=0;
int buttonState=0;
int buttonState2=0;
int seconds=0;
int minutes=0;
int hours=0;
void setup() 
{ 
  Serial.begin(9600);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  LCD.begin(16,2); 
}
 
void loop() 
{
  buttonState=digitalRead(10);
  buttonState2=digitalRead(11);
  if(buttonState2==HIGH)
  {
    seconds=0;
    minutes=0;
    hours=0;
    power=0;
  }
  if(buttonState == HIGH)
  {
    if(power==0)
    {
     power=1; 
    }
    else
    {
     power=0; 
    }
    Serial.println(power);
  }
  if(power==1)
  {
    seconds++;
    if(seconds==60)
    {
      seconds=0;
      minutes++;
    }
    if(minutes==60)
    {
     hours++;
     minutes=0;
     seconds=0;
    }
  	LCD.setCursor(0,0);
    LCD.print("HH: MM: SS");
    LCD.setCursor(0,1);
    if(seconds<10 && minutes<10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
    else if(seconds<10 && minutes >=10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": ");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
    else if(seconds>=10 && minutes <10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": ");
     LCD.print(seconds);
    }
    else if(seconds<10 && minutes <10 && hours>=10)
    {
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
    delay(500);	
  	LCD.clear();
  }
  else
  {
    LCD.setCursor(0,0);
    LCD.print("HH: MM: SS");
    LCD.setCursor(0,1);
    if(seconds<10 && minutes<10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
    else if(seconds<10 && minutes >=10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": ");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
    else if(seconds>=10 && minutes <10 && hours<10)
    {
     LCD.print("0");
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": ");
     LCD.print(seconds);
    }
    else if(seconds<10 && minutes <10 && hours>=10)
    {
     LCD.print(hours);
     LCD.print(": 0");
     LCD.print(minutes);
     LCD.print(": 0");
     LCD.print(seconds);
    }
  }
  delay(500);
}