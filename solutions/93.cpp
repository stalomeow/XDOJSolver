#include<stdio.h>
int main()
{
 int a,b,max,min,i,n;
 scanf("%d %d",&a,&b);
 max=min=a;
 if(b>max) max=b;
 if(b<min) min=b;
 printf("%d %d",i=max%10,n=min*min);
 return 0;
}
