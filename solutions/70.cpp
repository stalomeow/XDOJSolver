#include<stdio.h>
int main()
{
 int n,i,sum,j,a[100][100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);
 printf("%d ",a[0][0]);
 for(sum=1;sum<n*2-1;sum++)
 {
  if(sum<n)
  {
   if(sum%2==1)
   {
    for(i=0;i<sum+1;i++)
    printf("%d ",a[i][sum-i]);
   }
   else
   {
    for(i=0;i<sum+1;i++)
    printf("%d ",a[sum-i][i]);
   }
  }
  else
  {
   if(sum%2==1)
   {
    for(i=0;i<2*n-1-sum;i++)
    printf("%d ",a[sum-n+1+i][n-1-i]);
   }
   else
   {
    for(i=0;i<2*n-1-sum;i++)
    printf("%d ",a[n-1-i][sum-n+1+i]);
   }
  }
 }
 return 0;
}
