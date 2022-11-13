#include<stdio.h>
#include<string.h>
int main()
{
 int len(char *str); 
 char s[100000];
 gets(s);
 printf("%d",len(s));
 return 0;
}

int len(char *str)
{
 char *p=str;
 while(*p!='\0')
 p++;
 return (p-str);
}
