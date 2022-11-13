#include<stdio.h>
#include<string.h> 
void copystr(char *str,char *result,int m)
{
 int i,len,index;
 len=strlen(str);
 index=0;
 if(m>len)
 {
  printf("error");
 }
 else
 {
  for(i=m-1;i<len;i++)
  {
   result[index++]=str[i];
  }
 }
 result[index]='\0';
}
int main(void){
 char str[51];
 int m,i;
 char result[51];
 gets(str);
 scanf("%d",&m);
 copystr(str,result,m);
 printf("%s",result);
 
 return 0;
}



