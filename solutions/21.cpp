#include <stdio.h>
int main()
{
 int num, a, b, c, d, e;
 scanf("%d", &num);
 a = num/10000;
 b = num/1000-10*a;
 c = num/100-100*a-10*b;
 d = num/10-1000*a-100*b-10*c;
 e = num-10000*a-1000*b-100*c-10*d;
 printf("%d %d %d %d %d", a, b, c, d, e);
 return 0;
}
 
