//NAME : OBAID-UR-RAHMAN SIDDIQUI
//REG.NO : L1S19BSCS0001

#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(12, 2, NEO_GRB + NEO_KHZ800);

int count=0;
int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  pinMode(2,OUTPUT);
  pixels.begin();
  Serial.begin(9600);
}

void loop()
{
   for(int i=0;i<12;i++)
    {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.show();
   }
  setColor();
  if(count==0)
  {
    for(int i=0;i<12;i++)
    {
        setColor();
      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
      delay(500);
    }
  }
  else if(count==1)
  {
     for(int i=0;i<12;i++)
    {
        setColor();
      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
       if(i%2==1)
       {
      delay(1000);
       }
     }
    delay(200);
  }
  else if(count==2)
  {
     for(int i=0;i<12;i++)
    {
        setColor();
        if(i%3==0 && i!=0)
        {
        delay(1000);
        }
      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
     }
    delay(200);
  }
  else if(count==3)
  {
     for(int i=0;i<12;i++)
    {
        setColor();
        if(i%4==0 && i!=0)
        {
        delay(1000);
        }
      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
     }
    delay(200);
  }
   else if(count==4)
  {
     for(int i=0;i<12;i++)
    {
        setColor();
        if(i%6==0 && i!=0)
        {
        delay(1000);
        }
      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
     }
     delay(200);
  }
   else if(count==5)
  {
     for(int i=0;i<12;i++)
    {
        setColor();

      pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
      pixels.show();
      if (i == 12)
      {
        i = 0; // start all over again!
        setColor();
      }
     }
     delay(1000);
  }
  count++;
  if(count==6)
  {
    count=0;
  }
}

void setColor()
{
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}
