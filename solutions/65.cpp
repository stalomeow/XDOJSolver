#include <stdio.h>
int main()
{
 int n, m;
 scanf("%d", &n);
 for(m=0;;m=0)
 {
  for(m=0;n>0;n=n/10)
  {
   m=m+n%10;
  }
  if(m<10)
   break;
  else
   n=m;
 }
 printf("%d", m);
 return 0;
}
