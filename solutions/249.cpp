#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 
 for(i=2;i<=n;i++)
 {
  if(n%i==0) 
  {
   printf("%d",i);
   n=n/i;
   break;
  }
 }
 for(;n>=i;n=n=n/i) 
 {
  for(i=2;i<=n;i++)
  {
  if(n%i==0) 
   {
    printf("*%d",i);
    break;
   }
  }
 }
 return 0;
 } 
