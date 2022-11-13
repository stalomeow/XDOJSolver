#include<stdio.h>
int main()
{
 int n,m,t,k;
 int square[20][20];
 int i,j,starti=-1,startj=-1,num[51]={0},sum=0; 
 scanf("%d %d %d %d",&n,&m,&t,&k);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  scanf("%d",&square[i][j]);
  if(square[i][j]==k&&starti==-1)
  {
   starti=i;
   startj=j;
  }
  }
 }
 i=starti;
 j=startj;
 for(i=starti;square[i][j]==k;i++) 
 {
  for(j=startj;square[i][j]==k;j++)
  {
   if(i-1>=0)
   num[square[i-1][j]]=1;
   if(j-1>=0)
   num[square[i][j-1]]=1;
   if(i+1<n)
   num[square[i+1][j]]=1;
   if(j+1<m)
   num[square[i][j+1]]=1;
  }
  j=startj;
 }
 for(i=0;i<51;i++)
 {
  sum+=num[i];
 }
 if(num[k]==1) sum--;
 printf("%d",sum);
 
}
