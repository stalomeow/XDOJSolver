#include<stdio.h>
int main()
{int max=0,number=0,i,word=0;
 char a[100];
    gets(a);
  for(i=0;a[i]!='\0';i++)
  {if(a[i]==' '||a[i]=='.'){if(number>max)
                {max=number;}
                number=0;
         word=0;
                }
   else if(word==0)
   {word=1;
    number++;
   }
     else if(word==1&&a[i]!='.')
    {number++;
    }
    }
   printf("%d",max);

 }
