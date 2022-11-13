#include<stdio.h>
int main()
{
 int day,n,u,z,a,b,c,d,e,f,g;
 scanf("%d %d %d",&day,&n,&u);
 z=u%10;
 if(day==6||day==7)
  printf("%d no",z);
 else
 {
  if(n<=200)
   printf("%d no",z);
  else if(n<=400)
    switch(day)
    {
     case 1:a=1,b=6; break;
     case 2:a=2,b=7; break;
     case 3:a=3,b=8; break;
     case 4:a=4,b=9; break;
     case 5:a=5,b=0; break;
    }
  else
    switch(day)
    {
     case 1||3||5:c=1,d=3,e=5,f=7,g=9; break;
     default:c=0,d=2,e=4,f=6,g=8; break;
    }
  if(z==a||z==b||z==c||z==d||z==e||z==f||z==g)
   printf("%d yes",z);
  else printf("%d no",z);
 }
 return 0;
}



