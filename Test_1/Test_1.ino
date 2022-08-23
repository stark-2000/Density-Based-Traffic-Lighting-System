void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a,b,t,d0,d1,x[10];
a=0;
b=0;
if(a==0&&b==0)
{
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
}
for(t=0;t<1000;t++)
{
    if(digitalRead(4)==HIGH)
      a++;
    delay(10);
}
x[0]=a;
  if(x[0]==0)
    {
      d0=0;
    }

  if(x[0]<4)
    {
      d0=9000;
    }
  if(x[0]>3&&x[0]<9)
    {
      d0=15000;
    }
  if(x[0]>8&&x[0]<15)
    {  
      d0=25000;
    }
  if(x[0]>14)
    {
      d0=60000;
    }
  digitalWrite(9,HIGH);
  digitalWrite(7,LOW);
  delay(d0);

 /*igitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(d0);*/
}
