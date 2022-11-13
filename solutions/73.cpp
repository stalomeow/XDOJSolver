#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],zimu;
 int i,temp,shuzi=0;//数字储存器;
 gets(str);
 for (i=0;i<strlen(str);i++)//遍历每一个字符 
 {
  if ('0'<=str[i] && str[i]<='9')//当str[i]是数字 
  {
   zimu=str[i-1];//str[i]的前一位是字母 
   for (;'0'<= str[i] && str[i]<='9';i++)//算出数的值,同时移动输入的字符串的指针 
   {
    shuzi=shuzi*10 +str[i]-48;
   }
   for(temp=0;temp<shuzi-1;temp++)//输出 temp - 1 次 
   {
    printf("%c",zimu);
   }
   shuzi=0;//数字储存器归零 
   i--;//指针回移 
  }
  else//当str[i]是字母 
  {
   printf("%c", str[i]);
  }
 }
 
 return 0;
} 
