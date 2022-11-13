#include <stdio.h>
#include <string.h>
int main()
{
 char s[100][100],str[100], c[100];
 int i, j, n, k, l1, l2, isPrime;
 gets(str);//           所要查找的字符串是   str 
 scanf("%d %d",&isPrime,&n);
 for(i=0;i<n+1;i++)//输入字符串们 
  gets(s[i]);
 for(i=0;i<n+1;i++)
 {
  if(0==isPrime)//对大小写不敏感 
  {
     strlwr(s[i]);//   strlwr函数：将字符串全部转换为小写 
     strlwr(str);
  }
  l1=strlen(s[i]);
  l2=strlen(str);
  for(j=0;j<=l1-l2;j++)
  {
   for(k=0;k<l2;k++)
    c[k]=s[i][j+k];
   if(0==strcmp(c,str))//比较得出两字符串相同时 
   {
    printf("%s\n",s[i]);
    break; 
   }
  }
 }
 return 0;
}
