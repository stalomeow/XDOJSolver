#include<stdio.h>//非结构体版本
int main()
{
 int d[100],c[100],time,temp,p=0,b[100]={0},t[100]={0},i,j,n,num[100],s1,s2,e1,e2;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %d:%d %d:%d",&num[i],&s1,&s2,&e1,&e2);
  time=(e1-s1)*60+e2-s2;//重点 
  t[num[i]]+=time;
 }
 for(i=0;i<n;i++)
 if(b[num[i]]==0)
 {
  b[num[i]]=1;
  c[p]=t[num[i]];
  d[p]=num[i];
  p++;
 }
 for(i=0;i<p-1;i++)
 for(j=0;j<p-1-i;j++)
 {
  if(c[j]<c[j+1])
  {
   temp=c[j+1]; 
   c[j+1]=c[j];
   c[j]=temp;
   temp=d[j+1];
   d[j+1]=d[j];
   d[j]=temp;
  }
  else if(c[j]==c[j+1])
  if(d[j]>d[j+1])
  {
   temp=d[j+1];
   d[j+1]=d[j];
   d[j]=temp;
  }
 }
 for(i=0;i<p;i++)
 printf("%d %d\n",d[i],c[i]);
 return 0;
} 

