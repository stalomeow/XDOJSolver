#include<stdio.h>
int main()
{
 int a,b,c,d;
 scanf("%d",&d);
 a=d/100;
 b=d/10-a*10;
 c=d-a*100-b*10;
 printf("%d %d %d",a,b,c);
 return 0;
}
