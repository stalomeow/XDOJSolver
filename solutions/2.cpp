#include<stdio.h>

int main()
{
 int n,i,k;
 int a[1000];
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0,k=1;i<n-1;i++)
 {
  if(a[i]!=a[i+1])
   k++; 
 }
 
 printf("%d",k);
 
 return 0;
 } 

