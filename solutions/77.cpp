#include<stdio.h>
#include<string.h>
int convert(char str1[])
{
 int i,sum=0;
 for(i=0;str1[i]!='\0';i++)
    sum=sum*10+str1[i]-'0';
 return sum;
} 

int main()
{
 char str[3][10],op;
 int i,index,j,num[2];
 for(i=0;i<3;i++)
    scanf("%s",str[i]);
 for(i=0;i<3;i++)
 {
  if(str[i][0]<'0')
  {
   op=str[i][0];
   index=i;
  }
 }
 for(i=0,j=0;i<3;i++)
 {
  if(i!=index)
  {
   num[j]=convert(str[i]);
   j++;
  }
 }
 switch(op)
 {
  case'+':printf("%d",num[0]+num[1]);break;
  case'-':printf("%d",num[0]-num[1]);break;
  case'*':printf("%d",num[0]*num[1]);break;
  case'/':printf("%d",num[0]/num[1]);break;
  case'%':printf("%d",num[0]%num[1]);break;
 }
 return 0;
}
