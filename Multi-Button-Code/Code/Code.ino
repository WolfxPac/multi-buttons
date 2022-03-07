/*
 * This code lets you use a single Analogue Pin for multiple inputs.
 * Check out https://www.astirtech.com/ 
 * Code By: Harsh Dethe
 * Date: 07/03/2022
 */

#define input A0
#define LED1 7
#define LED2 6
#define LED3 5
#define LED4 4
#define LED5 3
#define LED6 2

bool flag1, flag2, flag3, flag4, flag5, flag6 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(input,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
}

void loop()
{
  int val = analogRead(input);
  Serial.println(val);
  delay(500);
  
  if(val == 703)
  {
    if(flag1 == 0)
    {
      digitalWrite(LED1, HIGH);
      flag1 = 1;
    }
    else if(flag1 == 1)
    {
      digitalWrite(LED1, LOW);
      flag1 = 0;
    }
  }
  
  else if(val == 536)
  {
    if(flag2 == 0)
    {
      digitalWrite(LED2, HIGH);
      flag2 = 1;
    }
    else if(flag2 == 1)
    {
      digitalWrite(LED2, LOW);
      flag2 = 0;
    }
  }
    
  else if(val == 433)
  {
    if(flag3 == 0)
    {
      digitalWrite(LED3, HIGH);
      flag3 = 1;
    }
    else if(flag3 == 1)
    {
      digitalWrite(LED3, LOW);
      flag3 = 0;
    }
  } 
  
  else if(val == 363)
  {
    if(flag4 == 0)
    {
      digitalWrite(LED4, HIGH);
      flag4= 1;
    }
    else if(flag4 == 1)
    {
      digitalWrite(LED4, LOW);
      flag4 = 0;
    }
  }
    
  else if(val == 313)
  {
    if(flag5 == 0)
    {
      digitalWrite(LED5, HIGH);
      flag5 = 1;
    }
    else if(flag5 == 1)
    {
      digitalWrite(LED5, LOW);
      flag5 = 0;
    }
  }
    
  else if(val == 274)
  {
    if(flag6 == 0)
    {
      digitalWrite(LED6, HIGH);
      flag6 = 1;
    }
    else if(flag6 == 1)
    {
      digitalWrite(LED6, LOW);
      flag6 = 0;
    }
  }
}
