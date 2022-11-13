#include<stdio.h>
#include<string.h>
int main()
{char a[100],b[100];
  int i,j,flag=1;
  gets(a);
   for(i=strlen(a)-1,j=0;i>=0;i--,j++) 
     {b[i]=a[j];
     }
  for(i=0;i<strlen(a);i++)
  {if(a[i]==b[i]) flag=1;
   else {
   printf("no");
   flag=0;
   break;
           }
  }
  if(flag)printf("yes");
  return 0;
}
