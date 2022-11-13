#include<stdio.h>

int main()
{
 int n,i,j;
 int a[1000];
 int k=1;
 

 scanf("%d",&n);

 
 a[0]=2;
 
 for(i=3;i<1000;i++)
 {
  for(j=2;j<i;j++)
  {
   if(i%j==0)
    break;  
   if((i%j!=0)||j==(i-1))
   {
    a[k]=i;
    printf("%d ",a[k]);
    k++;
   }
   else continue;
  }
 }
 
 
 /*
 for(i=0;i<1000;i++)
 {
  for(j=999;j>=i;j--)
  {
   if(a[i]+a[j]==n)
   printf("%d %d",a[i],a[j]);
   return 0;
  }
 }
 
 */
 return 0;
 } 
