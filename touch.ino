int x,y = 0;
int  a,b,c=0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(6, 8, 10, 11, 12, 13);
void setup()
{

lcd.begin(16, 2);


lcd.clear();
      lcd.print("IMMEDIATE ACTION");
      lcd.setCursor(0, 1);
      lcd.print("SYSTEM");
      delay(1000);
}
int readX() // returns the value of the touch screen's X-axis
{
int xr=0;
pinMode(14, INPUT);   // A0
pinMode(15, OUTPUT);    // A1
pinMode(16, INPUT);   // A2
pinMode(17, OUTPUT);   // A3
digitalWrite(15, LOW); // set A1 to GND
digitalWrite(17, HIGH);  // set A3 as 5V
delay(15); // short delay is required to give the analog pins time to adjust to their new roles
xr=analogRead(0); //  return xr;
}
int readY() // returns the value of the touch screen's Y-axis
{
int yr=0;
pinMode(14, OUTPUT);   // A0
pinMode(15, INPUT);    // A1
pinMode(16, OUTPUT);   // A2
pinMode(17, INPUT);   // A3
digitalWrite(14, LOW); // set A0 to GND
digitalWrite(16, HIGH);  // set A2 as 5V
delay(15); // short delay is required to give the analog pins time to adjust to their new roles
yr=analogRead(1); //
return yr;
}
void loop()
{

x=readX();

y=readY();
 if ( x>520 && x<880 && y>550 && y <910)
  {
    a=1;
    //lcd.clear();
    //lcd.print("TABLE NO:1");
    //lcd.setCursor(0, 1);
    //lcd.print("DOSA");
    delay(1000);               
 
  }  else
    if (x>130 && x<500 && y>550 && y <900)
    {
      b=1;
     //lcd.clear();
    //lcd.print("TABLE NO:1");
    //lcd.setCursor(0, 1);
    //lcd.print("TEA");
    delay(1000);   
    
  } else   if (x>520 && x<879 && y>136 && y <527)
    {
      c=1;
    //lcd.clear();
  //lcd.print("TABLE NO:1");
   //lcd.setCursor(0, 1);
//lcd.print("COFFEE");
    delay(1000);   
      
    }  else   if (x>130 && x<500 && y>110 && y <532)
    {
      
      if (a==1)
      {
      lcd.clear();
      lcd.print("TABLE NO:1");
      lcd.setCursor(0, 1);
      lcd.print("IDLI");
      delay(1000);
      }   else  if (b==1)
      {
      lcd.clear();
      lcd.print("TABLE NO:1");
      lcd.setCursor(0, 1);
      lcd.print("TEA");
      delay(1000);
      } else  if (c==1)
      {
      lcd.clear();
      lcd.print("TABLE NO:1");
      lcd.setCursor(0, 1);
      lcd.print("DOSA");
      delay(1000);
      } 
  }

delay (200);
}