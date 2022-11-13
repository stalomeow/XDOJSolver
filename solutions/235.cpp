#include<stdio.h>
#define month 12
int main()
{char *str[month+1]={"January","February","March","April","May","June","July","Augest","September",
 "Octorber","November","December","wrong"};
 int n,i;
 scanf("%d",&n);
 if(n<1||n>12)
 {printf("%s",*(str+12));
 }
 else
 {printf("%s",*(str+n-1));
 }
return 0;
}

