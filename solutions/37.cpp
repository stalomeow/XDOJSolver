#include<stdio.h>
int main()
{
 int n,i,j,t,k=0;
 int a[100];//原数组 
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++)//输入数组 
 {
  scanf("%d",&a[i]);
 }
/* for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]%2==0)//将偶数前提 
   {
    /*t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    k=j;//最后一个偶数的位置 
   }
  }
 }*/
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)//将偶数前提 
   {
    t = a[k];
    a[k] = a[i];
    a[i] = t;
    k++;
   }
 }
 
 printf("%d\n", k); 
 
 for(i=0;i<n;i++){
  printf("%d ", a[i]);  
 }
 
 k=k-1;
 for(i=0;i<k;i++)
 {
  for(j=0;j<k-i;j++)
  {
   if(a[j]<a[j+1])//排序偶数 
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 
 for(i=(k+1);i<n-1;i++)
 {
  for(j=(k+1);j<n-1-i;j++)
  {
   if(a[j]<a[j+1])//排序奇数 
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 
 return 0;
}
