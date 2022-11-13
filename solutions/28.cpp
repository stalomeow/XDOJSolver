#include<stdio.h>
int main()
{
 int a,b,day;
 sacnf("%d %d",&a,&b);
 switch(b)
 {
  case 2:
      if(a%400==0||a%4==0&&a%100!=0)  day=29;
      else   day=28;
      break;
  case 1||3||5||7||8||10||12:day=31;break;
  default:day=31;break;
 } 
 printf("%d",day);
 return 0;
} 
