#include <stdio.h>
int main()
{
 int a[100][100];
 int b[100][100];
 int m, n, i, j;
 scanf("%d %d",&n,&m);//n––m¡– 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   scanf("%d",&a[i][j]);
 }
 for(i=0; i<m; i++)
 { 
  for(j=0; j<n; j++)
  {
   printf("%d ",a[n-j-1][i]);
   if(0==n-j-1)
    printf("\n");
  }
 }
 return 0; 
}
