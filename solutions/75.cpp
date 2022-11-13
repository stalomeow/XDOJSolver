#include <stdio.h>
int main()
{
 int img[256][256];//存储图像的数组 
 int a[256]={0};//统计灰度频次的数组     数组初始化！！！ 
 int m,n,i,j;
 scanf("%d %d",&m,&n);//接受图像的大小 
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&img[i][j]);//接收像素的灰度值 
   a[img[i][j]]++;//对每级灰度进行统计 
  }
 }
 for(i=0;i<256;i++)
 {
  if(a[i]!=0) 
   printf("%d %d\n",i,a[i]);
 }
 return 0;
 } 
