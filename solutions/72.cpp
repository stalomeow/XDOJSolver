#include <stdio.h>
#include <string.h>
int main()
{
 char tmpstr[100]={0};//定义一个足够大的字符数组用来容纳输入 
 char maxline[100]={0};//用来保存当前最长行的内容 
 char endline[]="***end***";//结束行标志 
 int maxlen=0;//用来记录当前长度的最高纪录 
 while(1)
 {
  gets(tmpstr);//接收一行用户输入        ps：用gets输入一行文本 
  if(!strcmp(tmpstr,endline)) break;//如果是结束行则跳出      ps：用strcmp比较 
  if(strlen(tmpstr)>maxlen)// ps：用strcpy保存新行 
  {
   maxlen=strlen(tmpstr);//保存最高纪录 
   strcpy(maxline,tmpstr);//保存当前最长行的内容 
  }
 }
 printf("%d\n",maxlen);
 printf("%s\n",maxline);//ps：用printf/puts输出结果 
 return 0;
} 
