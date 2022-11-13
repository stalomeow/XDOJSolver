#include <stdio.h>
int main()
{
 int n, k1=0, k2=0, a=0, b=0, c=0, d=0, e=0, f=0;
 int Pi[1000];
 float m=0;
 scanf("%d", &n);
 for(k1=0;k1<n;k1++)
 {
  scanf("%d", &Pi[k1]);
  k2=Pi[k1];
  m=m+k2;
  if(k2>=0&&k2<=50)
   a++;
  if(k2>=51&&k2<=100)
   b++;
  if(k2>=101&&k2<=150)
   c++;
  if(k2>=151&&k2<=200)
   d++;
  if(k2>=201&&k2<=300)
   e++;
  if(k2>300)
   f++;
 }
 m=m/n;
 printf("%.2f\n", m);
 printf("%d %d %d %d %d %d",a,b,c,d,e,f);
 return 0;
}
