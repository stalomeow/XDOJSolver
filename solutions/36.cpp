#include<stdio.h>

int main()
{
 int m,i,j,k,t;
 int a[20][20];
 int sum[42]={0};
 
 scanf("%d",&m);//m行m列 
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);//输入 
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
  {
   sum[i]+=a[i][j];//计算每一行的和 
  }
 }
 for(j=0;j<m;j++)
 {
  for(i=0;i<m;i++)
  {
   sum[j+m]+=a[i][j];//计算每一列的和 
  }
  
 }
 for(i=0;i<m;i++)
 {
  sum[2*m]+=a[i][i];//计算主对角线和 
 }
 for(i=0,j=m-1;i<m;i++,j--)
 {
  sum[2*m+1]+=a[i][j];//计算辅对角线和 
 } 
 for(i=0;i<2*m+1;i++)//一共循环多少趟 
 {
  for(j=0;j<2*m+1-i;j++)//每一趟中交换的次数 
  {
   if(sum[j]<sum[j+1])//比较 
   {
    t=sum[j];//交换 
    sum[j]=sum[j+1];
    sum[j+1]=t;
   }
  }
 }
 for(k=0;k<(2*m+2);k++) 
 {
  printf("%d ",sum[k]);//打印和 
 }

 return 0;
}
