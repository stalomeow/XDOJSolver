#include<stdio.h>
int main()
{
 
    int n,d,i,max=0,min=9;
 scanf("%d",&n);
 
 if(n==0){
  printf("1 0 0");
 }
 else{
  for(i=0;n!=0;i++)
  {
   d=n%10;
   if(d>max) max=d;
   if(d<min) min=d;
   
   n=n/10;
  }
  printf("%d %d %d",i,max,min);
 }
 return 0;
} 
