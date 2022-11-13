#include <stdio.h>
int main()
{
 int n,k,i,h=0,a[100]={0};
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(k==a[i])
  {
   printf("%d ",i);
   h=1;
  }   
 }
 if(0==h)
  printf("-1");
 return 0;
}
