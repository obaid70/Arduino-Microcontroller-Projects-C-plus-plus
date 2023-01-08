int power=0;
int buttonState=0;
int buttonState2=0;
int seconds=0;
int minutes=0;
void setup() 
{ 
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}
 
void loop() 
{
  buttonState=digitalRead(10);
  buttonState2=digitalRead(11);
  if(buttonState2==HIGH)
  {
    seconds=0;
    minutes=0;
    power=0;
    digitalWrite(0,LOW);
  	digitalWrite(1,LOW);
  	digitalWrite(2,LOW);
  	digitalWrite(3,LOW);
  	digitalWrite(4,LOW);
  	digitalWrite(5,LOW);
  	digitalWrite(6,LOW);
  	digitalWrite(7,LOW);
  	digitalWrite(8,LOW);
  	digitalWrite(9,LOW);
  	digitalWrite(12,LOW);
 	digitalWrite(13,LOW);
  	digitalWrite(7,LOW);
  	digitalWrite(A5,LOW);
  	digitalWrite(A4,LOW);
  	digitalWrite(A3,LOW);
  	digitalWrite(A2,LOW);
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
     minutes=0;
     seconds=0;
    }
    if(seconds<10)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==0)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==1)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==2)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==3)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==4)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==5)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==6)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==7)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==8)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==9)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
     if(seconds>=10&&seconds<20)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==10)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==11)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==12)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==13)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==14)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==15)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==16)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==17)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==18)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==19)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
     if(seconds>=20&&seconds<30)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==20)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==21)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==22)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==23)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==24)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==25)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==26)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==27)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==28)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==29)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=30&&seconds<40)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==30)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==31)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==32)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==33)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==34)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==35)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==36)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==37)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==38)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==39)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=40&&seconds<50)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
		if(seconds==40)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==41)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==42)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==43)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==44)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==45)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==46)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==47)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==48)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==49)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=50&&seconds<60)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
		if(seconds==50)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==51)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==52)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==53)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==54)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==55)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==56)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==57)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==58)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==59)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(minutes<10)
    {
        digitalWrite(A5,LOW);
        digitalWrite(A4,LOW);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==0)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==1)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==2)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==3)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==4)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==5)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==6)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==7)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==8)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==9)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
     if(minutes>=10&&minutes<20)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,LOW);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==10)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==11)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==12)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==13)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==14)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==15)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==16)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==17)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==18)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==19)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
     if(minutes>=20&&minutes<30)
    {
               digitalWrite(A5,LOW);
        digitalWrite(A4,HIGH);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==20)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==21)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==22)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==23)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==24)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==25)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==26)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==27)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==28)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==29)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=30&&minutes<40)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,HIGH);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==30)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==31)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==32)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==33)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==34)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==35)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==36)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==37)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==38)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==39)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=40&&minutes<50)
    {
               digitalWrite(A5,LOW);
        digitalWrite(A4,LOW);
        digitalWrite(A3,HIGH);
        digitalWrite(A2,LOW);
		if(minutes==40)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==41)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==42)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==43)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==44)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==45)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==46)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==47)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==48)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==49)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=50&&minutes<60)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,LOW);
        digitalWrite(A3,HIGH);
        digitalWrite(A2,LOW);
		if(minutes==50)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==51)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==52)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==53)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==54)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==55)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==56)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==57)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==58)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==59)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    delay(500);	

  }
  else
  {
    if(seconds<10)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==0)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==1)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==2)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==3)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==4)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==5)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==6)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==7)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==8)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==9)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
     if(seconds>=10&&seconds<20)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==10)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==11)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==12)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==13)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==14)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==15)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==16)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==17)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==18)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==19)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
     if(seconds>=20&&seconds<30)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==20)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==21)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==22)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==23)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==24)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==25)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==26)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==27)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==28)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==29)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=30&&seconds<40)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
		if(seconds==30)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==31)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==32)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==33)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==34)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==35)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==36)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==37)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==38)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==39)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=40&&seconds<50)
    {
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
		if(seconds==40)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==41)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==42)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==43)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==44)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==45)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==46)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==47)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==48)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==49)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(seconds>=50&&seconds<60)
    {
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
		if(seconds==50)
        {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        }
      else if(seconds==51)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==52)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==53)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
      }
      else if(seconds==54)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==55)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==56)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==57)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,HIGH);
        	digitalWrite(2,HIGH);
        	digitalWrite(3,LOW);
      }
      else if(seconds==58)
      {
        	digitalWrite(0,LOW);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
      else if(seconds==59)
      {
        	digitalWrite(0,HIGH);
        	digitalWrite(1,LOW);
        	digitalWrite(2,LOW);
        	digitalWrite(3,HIGH);
      }
    }
    if(minutes<10)
    {
        digitalWrite(A5,LOW);
        digitalWrite(A4,LOW);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==0)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==1)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==2)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==3)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==4)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==5)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==6)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==7)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==8)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==9)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
     if(minutes>=10&&minutes<20)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,LOW);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==10)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==11)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==12)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==13)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==14)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==15)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==16)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==17)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==18)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==19)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
     if(minutes>=20&&minutes<30)
    {
               digitalWrite(A5,LOW);
        digitalWrite(A4,HIGH);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==20)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==21)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==22)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==23)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==24)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==25)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==26)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==27)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==28)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==29)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=30&&minutes<40)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,HIGH);
        digitalWrite(A3,LOW);
        digitalWrite(A2,LOW);
		if(minutes==30)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==31)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==32)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==33)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==34)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==35)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==36)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==37)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==38)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==39)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=40&&minutes<50)
    {
               digitalWrite(A5,LOW);
        digitalWrite(A4,LOW);
        digitalWrite(A3,HIGH);
        digitalWrite(A2,LOW);
		if(minutes==40)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==41)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==42)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==43)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==44)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==45)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==46)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==47)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==48)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==49)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
    if(minutes>=50&&minutes<60)
    {
        digitalWrite(A5,HIGH);
        digitalWrite(A4,LOW);
        digitalWrite(A3,HIGH);
        digitalWrite(A2,LOW);
		if(minutes==50)
        {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
        }
      else if(minutes==51)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==52)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==53)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,LOW);
        	digitalWrite(13,LOW);
      }
      else if(minutes==54)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==55)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==56)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==57)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,HIGH);
        	digitalWrite(12,HIGH);
        	digitalWrite(13,LOW);
      }
      else if(minutes==58)
      {
        	digitalWrite(8,LOW);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
      else if(minutes==59)
      {
        	digitalWrite(8,HIGH);
        	digitalWrite(9,LOW);
        	digitalWrite(12,LOW);
        	digitalWrite(13,HIGH);
      }
    }
  }
  delay(500);
}