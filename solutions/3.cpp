#include<stdio.h>

int main()
{
 int n,i,j,k,mix;
 
 int a[1000];
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]); 
 } 
 
 for(i=0,k=10000;i<n;i++)
 {
  for(j=0;j<i;j++)//不能循环到自己 
  {
   if(a[i]==a[j])
   {
    k=0;
    break;
   }
   
   if(a[i]>a[j])
    mix=a[i]-a[j];
   else
    mix=a[j]-a[i];
    
   if(mix<k)
    k=mix;  
  }
 }
 
 printf("%d\n",k);
 
 return 0;
 } 

