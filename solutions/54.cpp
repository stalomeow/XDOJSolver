#include <stdio.h>
int main()
{
 int n, k1, k2, a, b, c;
 scanf("%d", &n);
 for( k1 = 0 ; k1 < 1000 ; k1++ )
 {
  c = k1 % 10;
  b = ( k1 - c ) / 10 % 10;
  a = ( k1 - c - 10 * b ) / 100;
  k2 = a + 10 * b + 100 * c;
  if( k1 + k2 == n)
  {
   printf("%d %d %d\n", a, b, c);
  }
 }
 return 0;
}
