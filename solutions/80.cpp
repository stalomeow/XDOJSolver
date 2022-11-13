#include<stdio.h>
#include<string.h>
int main()
{
 int N,M,C,i,j,sum=0,v,q;
 char a[20][21];
 scanf("%d %d %d",&N,&M,&C);
 for(i=0;i<N;i++)
  scanf("%s",a[i]);
 for(v=0,i=0,j=C-1;;v++)
 { 
  q=a[i][j];
  if(q=='W') 
  {
   sum++;
   a[i][j]=1;
   j--; 
  }
  if(q=='E') 
  {
   sum++;
   a[i][j]=1;
   j++; 
  }
  if(q=='N') 
  {
   sum++;
   a[i][j]=1;
   i--; 
  }
  if(q=='S') 
  {
   sum++;
   a[i][j]=1;
   i++; 
  }
  if((i<0)||(i>=N)||(j<0)||(j>=M))
  {
   printf("out %d",sum);
   break;
  }
  if(q==1)
  {
   printf("loop %d",sum);
   break;
  }
 }
 return 0;
 } 
