#include <stdio.h>
#include <math.h>
int function(int a, int b)
{
 int m, h=0, x[5];
 int i, j;
 x[0]=x[1]=x[2]=x[3]=x[4]=0;
 if(a>b)
 {
  m=a;
  a=b;
  b=m;
 }
 if(b<100)
  return 0;
 else
 {
  if(a<100)
   a=100;
  for(a=a;a<=b;a++)
  {
   j=0;
   for(i=a;i>0;i=i/10)
    x[j++]=i%10;
   x[5]=0;
   for(i=0;i<j;i++)
   {
    x[5]=x[5]+pow((double)x[i],(double)j);
   }
   if(a==x[5])
    h++;
  }
  return h;
 }
}
