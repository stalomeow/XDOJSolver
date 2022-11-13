#include<stdio.h>
int main()
{
 int a,b,c,d,i;
 scanf("%d %d %d %d",&a,&b,&c,&d);
 i=a;
 if(i<b) i=b;
 if(i<c) i=c;
 if(i<d) i=d;
 printf("%d",i);
 return 0;
}
