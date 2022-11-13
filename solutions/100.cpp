#include <stdio.h>
int main()
{
 int a, b, c;
 scanf("%d %d %d", &a, &b, &c);
 if( ( a + b > c )&&( b + c > a )&&( a + c > b ) )
 {
  printf("%d", a+b+c);
 }else
  printf("No");
 return 0;
}
¡¤¡¤¡¤

- 108
```c
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 int i,sum=0,j=0;
 char b[100];
 int c[100]={0};
 gets(b);
 for(i=0;i<strlen(b);i++)
 {
  
  if(b[i]>='0' && b[i]<='9')
  {
   c[j]=b[i]-48;
   j++; 
  }
 }
 for(i=0;i<j;i++)
 sum=sum*10+c[i];
 if (sum==0)
 printf("%d",sum);
 else
 {
  for(i=2;i<=sqrt(sum);i++)
  {
   if(sum%i==0)
   {
    sum=sum/i;
   }
  }
  printf("%d",sum);
 }
 return 0;
 } 
