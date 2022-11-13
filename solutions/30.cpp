#include<stdio.h>

int main()
{
 int a,b,i,n,k;

 scanf("%d %d",&a,&b);
 
 for(n=a;n<(b+1);n++)
 {
  k=n;
  for(i=1;i<(n/2+1);i++)
  {
   if(n%i==0)
    k=k-i;
  }
  if(k==0)
   printf("%d\n",n); 
 }
 
 return 0;
 } 
