#include<stdio.h>
int count=0; 
int n;
int a[9]={1,2,3,4,5,6,7,8,9};
int b[10]={0};
int main(){
 int k;
 scanf("%d",&n);
 Function(1,0);
 printf("%d",count);
}
void Function(int num,int space){
 int i,j,m,temp,sum;
 b[space]=num;//对每一个地方位置记录下选择 
 if(space==n-1)
 { 
  sum=0;
  for(j=0,m=0;j<=space;j++)
  {
   if(b[j]==1)
   {
    temp=a[m];
    for(i=1;b[j+i]==3;i++)
    temp=temp*10+a[m+i];
    sum+=temp;
    m=m+i; 
   }
   if(b[j]==2)
   {
    temp=a[m];
    for(i=1;b[j+i]==3;i++) 
    temp=temp*10+a[m+i];
    sum-=temp;
    m=m+i;
   }
  }
  if(sum==0)
  count++;    
  return;
 }
 for(i=1;i<=3;i++)
 Function(i,space+1);                                                 
}

