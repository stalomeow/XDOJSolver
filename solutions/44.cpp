#include <stdio.h>
int function(int n);
int main()
{
 int n, i=2, m;
 scanf("%d", &n);
 m=function(n);
 if(m==2)
  printf("yes"); 
 else if(m>2)
 {
  while(i<m&&m%i!=0)
   i++;
  if(i==m)
   printf("yes");
  else
   printf("%d", m);
 }
 return 0;
} 
int function(int n)
{
 int m;
 if(n==1||n==2)
  m=1;
 else 
  m=function(n-2) + function(n-1) ;
 return (m);
}
