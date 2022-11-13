#include<stdio.h>
#include<string.h>
int main()
{
 char s[13];
 int x=0,i,j,k;
 gets(s);
 for(i=0,k=0;i<11;i++,k++)
 {
  j=s[i]-48;
  x+=j*(k+1);
  if(0==i||4==i)
   i++;
 }
 x=x%11;
 if(10!=x&&x==s[12]-48)
 {
  printf("Right");
  return 0;
 } 
 if(10==x&&s[12]=='X')
 {
  printf("Right");
  return 0;
 }
 else
 {
  if(10!=x)
   s[12]=x+48;
  if(10==x)
   s[12]='X'; 
  printf("%s",s);
 }
 return 0;
}
