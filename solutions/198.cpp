#include<stdio.h>
int main()
{
 int M,A,B,C,m,a,b,c;
 M=12;
 A=3;
 B=4;
 C=5;
 m=8;
 for(a=1;a<=A;a++)
 {
  for(b=1;b<=B;b++)
  {
   for(c=1;c<=C;c++)
   {
    if(m==a+b+c)
    printf("%d %d %d\n",a,b,c);
   }
  }
 }
 return 0;
} 
