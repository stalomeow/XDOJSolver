#include <stdio.h>
int main() 
{ 
  int i,j,a[1005]={0};  //初始化每个数字出现的次数为0 
   int n,num;
   scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
  scanf("%d",&num);
  a[num]++; //边输入边统计数字出现的次数 
 } 
 for(i=1000;i>0;i--)  //i代表的是出现的次数 最大为1000 直接对出现的次数进行了排序 
 for(j=0;j<=1000;j++)//从数字0开始向上搜索 
 if(a[j]==i)  //若存在一个数字的出现次数为i 
 printf("%d %d\n",j,a[j]);
 return 0;
}
