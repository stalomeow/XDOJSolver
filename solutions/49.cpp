#include<stdio.h>
int main()
{
 int n,m,i; 
 scanf("%d",&n);
 
 
 for(m=0;m<n&&i!=n;m++)
 {
  i=m*m;
 }
 m=m-1;
 if(i==n) printf("%d",m);
 if(i!=n) printf("no");
 return 0;
}
