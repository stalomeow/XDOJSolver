#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 char a1;
 a1=getchar();
 if(a1<='z'&&a1>='a'&&a1<='Z'&&a1>='A')
     if(a1<='z'&&a1>='a')
      printf("%c",a1);
     else{
    a1=a1+32;
      printf("%c",a1); 
      }
 else
  printf("%c",a1);    
 return 0;
}

