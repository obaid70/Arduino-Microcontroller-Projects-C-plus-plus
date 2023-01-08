#include <LiquidCrystal.h>

#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define E 8
#define RS 9


LiquidCrystal LCD(RS, E, D4, D5, D6, D7);  
int celsius=0;
int fahrenheit = 0;
int intensity=0;
void setup() 
{ 
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1,INPUT);
  LCD.begin(16,2); 
}

void loop() 
{
    celsius = map(((analogRead(A0))), 0, 1023, 30, 70);
    fahrenheit = ((celsius * 9) / 5 + 32);
    LCD.setCursor(0,0);
    LCD.print("Temperature: ");
    LCD.print(celsius);
    delay(10000);
    LCD.clear();
    intensity=analogRead(A1);
    LCD.print("Gas Value : ");
    LCD.print(intensity);
    delay(10000);	
    LCD.clear();
}
