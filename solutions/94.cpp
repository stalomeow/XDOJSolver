#include<stdio.h>
int main()
{
 int h,i,j,k,a,b,c,d;
 scanf("%d %d %d %d",&h,&i,&j,&k);
 a=h;
 if(i<a) a=i;
 if(j<a) a=j;
 if(k<a) a=k;
 d=h;
 if(i>d) d=i;
 if(j>d) d=j;
 if(k>d) d=k; 
 c=d; 
 if(i>b&&i<c) c=i;
 if(j>b&&j<c) c=j;
 if(k>b&&k<c) c=k; 
 b=c;
 if(i>a&&i<b) b=i;
 if(j>a&&j<b) b=j;
 if(k>a&&k<b) b=k;
 printf("%d %d %d %d",a,b,c,d);
 return 0;
}
