#include<stdio.h>
int main()
{
 int a[1000], m=0,i,n=1;
 for(i=0;i<1000;i++)
 {
  scanf("%d",&a[i]);
  if(a[i]==0)
  break;
 }
 for(i=0;i<1000;i++)
 {
  if(a[i]==1)
   m++;
  if(a[i]==2)
  {
   if(a[i-1]!=2)
   {
    m=m+2;
    n=1;
   }
   if(a[i-1]==2)
   {
    n++;
    m=m+2*n;
   }
  }
  if(a[i]==0)
   break;
 }
 printf("%d",m);
 return 0;
}
