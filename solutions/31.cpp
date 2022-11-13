#include<stdio.h>

int main()
{
 int a,b,i;
 int m=0;
 
 scanf("%d %d",&a,&b);
 
 if(a==0)
  printf("%d",b);
 if(b==0&&a!=0)
  printf("%d",a);
  
 if(a!=0&&b!=0)
 {
  for(i=1;i<=a&&i<=b;i++)
  {
   if(a%i==0&&b%i==0)
    m=i;
  }
  printf("%d",m);  
 }
 
 return 0;
 } 

