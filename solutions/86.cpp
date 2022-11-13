#include<stdio.h>
int main()
{
 int n,a,b,c,d,i,j,k,count=0;
 int lattice[100][100]={0};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %d %d %d",&a,&b,&c,&d);
  for(j=a;j<c;j++)
     for(k=b;k<d;k++)
        lattice[j][k]=1;
 }
 for(i=0;i<100;i++)
 {
  for(j=0;j<100;j++)
  {
   if(lattice[i][j]==1)
   count++;
  }
 }
 printf("%d",count);
 return 0;
} 
