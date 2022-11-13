#include<stdio.h>
int main()
{
 int m,n,a[100][100],i,j,flag=0,max[100],min[100];
 scanf("%d %d",&m,&n);         //矩阵规模为    >>>> m 行 n 列 
 for(i=0;i<m;i++)              //输入矩阵
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++) //外层循环处理每一行 
 {
  min[i]=a[i][0];//第i行的最小值为min[i] 
  for(j=1;j<n;j++)
  {
   if(a[i][j]<min[i])
    min[i]=a[i][j];
  } 
 }
 for(j=0;j<n;j++) //内层循环表示每一列的最大值 
 {
  max[j]=a[0][j];
  for(i=0;i<m;i++)
  {
   if(a[i][j]>max[j])
    max[j]=a[i][j];
  }
 }
 for(i=0;i<m;i++) 
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]==max[j]&&a[i][j]==min[i])
   {
    printf("%d %d %d",i,j,a[i][j]);
    flag=1;
   }
  }
 }
 if(flag==0) printf("no");
 return 0;
}
