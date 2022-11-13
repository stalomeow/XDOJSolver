#include <stdio.h>
int main()
{
 int a[30][30];
 int b[30][30];
 int n,m,i,j;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);
   b[i][j]=a[i][j];
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   if((a[i][j]==a[i][j+1])&&(a[i][j]==a[i][j+2]))
   {
    b[i][j]=0;
    b[i][j+1]=0;
    b[i][j+2]=0;
   }
  }
 }
 for(j=0;j<m;j++)
 {
  for(i=0;i<n;i++)
  {
   if((a[i][j]==a[i+1][j])&&(a[i][j]==a[i+2][j]))
   {
    b[i][j]=0;
    b[i+1][j]=0;
    b[i+2][j]=0;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d ",b[i][j]);
   if(j==m-1)
    printf("\n");
  }
 }
 return 0;
}



