#include <stdio.h>
int main()
{
 int num1,num2;
 float a,b;
 scanf("%d",&num1);
 scanf("%d",&num2);
 a = 7.86*4*3.1415926*num1*num1*num1/24000;
 b = 19.3*4*3.1415926*num2*num2*num2/24000;
 printf("%.3f  %.3f", a,b);
 return 0;
}

