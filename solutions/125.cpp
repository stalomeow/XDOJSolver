#include<stdio.h>
int main()
{
 int i=1;
 float r,n,p=1;
 scanf("%f %f",&r,&n);
 while(i<=n)
 {
 p=p*(1+r);
 i=i+1;
 }
 printf("%.2f",p);
 return 0;
}
