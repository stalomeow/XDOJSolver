#include<stdio.h>
#include<string.h>
int main()
{
 int count(char *s);
 char string[100];
 gets(string);
 count(string);
 return 0;
 } 
 
 int count(char *s)
 {
  int num[5]={0,0,0,0,0};
  char *p=s;
  while(*p!='\0')
  {
   
   if(*p>='A' && *p<='Z')
   num[0]++;
   else if(*p>='a' && *p<='z')
   num[1]++;
   else if(*p==' ')
   num[2]++;
   else if(*p>='0' && *p<='9')
   num[3]++;
   else
   num[4]++;
  p++;
  }
  printf("%d %d %d %d %d",num[0],num[1],num[2],num[3],num[4]);
 }
