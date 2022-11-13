#include <stdio.h>
#include <string.h>
int main()
{
 char code[100]={0};
 gets(code);
 int grades=1,a=0,b=0,c=0,d=0,temp=0,i;
 if(0==strlen(code))
  grades=0;
 else
 {
  if(strlen(code)>8)
   grades++;//超过八位+1分 
  for(i=0;;i++)
  {
   if(code[i]=='\0')
    break;
   else if(code[i]>='a' && code[i]<='z')
    a=1;//a代表小写字母 
   else if(code[i]>='0' && code[i]<='9')
    b=1;//b代表数字 
   else if(code[i]>='A' && code[i]<='Z')
    c=1;//c代表大写字母
   else
    d=1; //d代表非字母数字的字符 
  }
 }
 temp=a+b+c+d;//temp为密码包含的字符种类数 
 if(temp!=0) 
  temp--;//多一类加一分（加的分始终比种类数少一 
 grades+=temp;
 printf("%d",grades);
 return 0;
}
