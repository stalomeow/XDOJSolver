#include<stdio.h>
int main()
{
 int S,A,T;
 scanf("%d",&S);
 A=S-3500;
 if(S<3500) T=0;
 else if(A<=1500) T=0.03*A;
 else if(A>1500&&A<=4500) T=0.03*1500+0.1*(A-1500);
 else if(A>4500&&A<=9000) T=0.03*1500+0.1*3000+0.2*(A-4500);
 else if(A>9000&&A<=35000) T=0.03*1500+0.1*3000+0.2*4500+0.25*(A-9000);
 else if(A>35000) T=0.03*1500+0.1*3000+0.2*4500+0.25*26000+0.3*(A-35000);
 printf("%d",S-T);
 return 0;
} 