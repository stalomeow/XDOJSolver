#include<stdio.h>
int main()
{
 int a,b,c,d,sum;
 scanf("%d",&a);
 b=a/100;
 c=(a-100*b)/10;
 d=a-100*b-10*c;
 sum=b+c+d;
 printf("%d",sum);
 return 0;
}
