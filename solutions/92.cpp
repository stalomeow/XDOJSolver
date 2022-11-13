#include<stdio.h>

int main()
{
 int n,a,b,c,d,e,f;//100元 a张，50元b张，20元c张，10元d张，5元e张，1元f张 
 scanf("%d",&n);
 a=n/100;
 b=(n-100*a)/50;
 c=(n-100*a-50*b)/20;
 d=(n-100*a-50*b-20*c)/10;
 e=(n-100*a-50*b-20*c-10*d)/5;
 f=n-100*a-50*b-20*c-10*d-5*e;
 printf("%d %d %d %d %d %d",a,b,c,d,e,f);
 return 0; 
}

