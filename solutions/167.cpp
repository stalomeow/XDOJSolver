#include <stdio.h>
int main() 
{ 
  int i,j,a[1005]={0};  //��ʼ��ÿ�����ֳ��ֵĴ���Ϊ0 
   int n,num;
   scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
  scanf("%d",&num);
  a[num]++; //�������ͳ�����ֳ��ֵĴ��� 
 } 
 for(i=1000;i>0;i--)  //i�������ǳ��ֵĴ��� ���Ϊ1000 ֱ�ӶԳ��ֵĴ������������� 
 for(j=0;j<=1000;j++)//������0��ʼ�������� 
 if(a[j]==i)  //������һ�����ֵĳ��ִ���Ϊi 
 printf("%d %d\n",j,a[j]);
 return 0;
}