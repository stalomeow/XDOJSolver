#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int n, i;
  scanf("%d", &n);
   for (i = n * n - n + 1; i <= n * n + n - 1; i = i + 2) 
    {  printf("%d ", i); }
 return 0;
}

