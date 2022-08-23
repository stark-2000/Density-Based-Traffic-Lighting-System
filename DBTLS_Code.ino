void setup()
{
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,OUTPUT);//red
pinMode(7,OUTPUT);//red
pinMode(8,OUTPUT);//red
pinMode(9,OUTPUT);//red
pinMode(10,OUTPUT);//green
pinMode(11,OUTPUT);//green
pinMode(12,OUTPUT);//green
pinMode(13,OUTPUT);//green
}

void loop()
{
int a,b,c,d,t,d0,d1,d2,d3,ab,cd,ef,gh,temp,i,j;
  a=0;
  b=0;
  c=0;
  d=0;
  if(a==0&&b==0&&c==0&&d==0)
  {
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  }
  for (t=0;t<1000;t++)
  {
    if(digitalRead(2)==HIGH)
      a++;
    if(digitalRead(3)==HIGH)
      b++;
    if(digitalRead(4)==HIGH)
      c++;
    if(digitalRead(5)==HIGH)
      d++;
    delay(10);
  }
ab=a;
cd=b;
ef=c;
gh=d;
int x[4] = {a,b,c,d};
for(i=0;i<4;i++)
  {   
    for(j=i+1;j<4;j++)
    {
      if(x[i]<x[j])
      {
        temp  = x[i];
        x[i] = x[j];
        x[j]=temp;
      }
    }
  }

if(a!=b && b!=c && c!=d)
  {d0=25000; d1=20000; d2=10000; d3=8000;}

if(a==b && b!=c && c!=d)
  {d0=25000; d1=25000; d2=10000; d3=8000;}

if(a!=b && b==c && c!=d)
  {d0=25000; d1=20000; d2=20000; d3=10000;}

if(a!=b && b!=c && c==d)
  {d0=25000; d1=20000; d2=10000; d3=10000;}

if(a==b && b!=c && c==d)
  {d0=25000; d1=25000; d2=10000; d3=10000;}

if(a==b && b==c && c!=d)
  {d0=25000; d1=25000; d2=25000; d3=20000;}

if(a!=b && b==c && c==d)
  {d0=25000; d1=20000; d2=20000; d3=20000;}

if(a==b && b==c && c==d)
  {d0=20000; d1=20000; d2=20000; d3=20000;}

if(x[0]==ab)
   {
    digitalWrite(6,LOW);     //RED
    digitalWrite(7,HIGH);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d0);
   }

if(x[0]==cd)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,LOW);     //RED
    digitalWrite(11,HIGH);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d0);
  }

if(x[0]==ef)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,LOW);    //RED
    digitalWrite(13,HIGH);    //GREEN
    delay(d0);
  }

if(x[0]==gh)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,LOW);    //RED
    digitalWrite(9,HIGH);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d0);
  }

if(x[1]==ab)
   {
    digitalWrite(6,LOW);     //RED
    digitalWrite(7,HIGH);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d1);
   }

if(x[1]==cd)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,LOW);     //RED
    digitalWrite(11,HIGH);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d1);
  }

if(x[1]==ef)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,LOW);    //RED
    digitalWrite(13,HIGH);    //GREEN
    delay(d1);
  }

if(x[1]==gh)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,LOW);    //RED
    digitalWrite(9,HIGH);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d1);
  }


if(x[2]==ab)
   {
    digitalWrite(6,LOW);     //RED
    digitalWrite(7,HIGH);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d2);
   }

if(x[2]==cd)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,LOW);     //RED
    digitalWrite(11,HIGH);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d2);
  }

if(x[2]==ef)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,LOW);    //RED
    digitalWrite(13,HIGH);    //GREEN
    delay(d2);
  }

if(x[2]==gh)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,LOW);    //RED
    digitalWrite(9,HIGH);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d2);
  }

if(x[3]==ab)
   {
    digitalWrite(6,LOW);     //RED
    digitalWrite(7,HIGH);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d3);
   }

if(x[3]==cd)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,LOW);     //RED
    digitalWrite(11,HIGH);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d3);
  }

if(x[3]==ef)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,HIGH);    //RED
    digitalWrite(9,LOW);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,LOW);    //RED
    digitalWrite(13,HIGH);    //GREEN
    delay(d3);
  }

if(x[3]==gh)
  {
    digitalWrite(6,HIGH);     //RED
    digitalWrite(7,LOW);    //GREEN
    digitalWrite(8,LOW);    //RED
    digitalWrite(9,HIGH);    //GREEN
    digitalWrite(10,HIGH);     //RED
    digitalWrite(11,LOW);    //GREEN
    digitalWrite(12,HIGH);    //RED
    digitalWrite(13,LOW);    //GREEN
    delay(d3);
  }
}

