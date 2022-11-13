#include<stdio.h>

int main()
{
 int n,m,i,j,t,u,num;
 int a[1000];
 int b[1000]={0};
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<n;i++)
 {
  k=a[i];
  while(k!=0)
  {
   b[i]=b[i]+k%10;
   k/=10;
  }
 }
 
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(b[j]>b[i]) 
   {
   t=b[i];       u=a[i];
   b[i]=b[j];    a[i]=a[j];
   b[j]=t;       a[j]=u;
   } 
   if(b[j]==b[i])
   {
    if(a[j]<a[i])
    {
     t=b[i];       u=a[i];
     b[i]=b[j];    a[i]=a[j];
     b[j]=t;       a[j]=u;
    }
   }
  }
 }
 
 for(i=0;i<n;i++)
 {
  printf("%d %d\n",a[i],b[i]);
 }
 
 return 0;
 } 


    
