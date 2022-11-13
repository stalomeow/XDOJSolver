#include <stdio.h>
#include <math.h>
int main()
{
 int i, n, c=0, d;
 int a[1000];
 scanf("%d", &n);
 scanf("%d", &a[0]);
 for(i=1;i<n;i++)
 {
  scanf("%d", &a[i]);
  d = fabs( a[i] - a[i-1] );
  if( d > c )
  {
   c = d;
  }
 }
 printf("%d", c);
 return 0;
}
