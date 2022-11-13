#include <stdio.h>
int main()
{
 char opt;
 int number1;
 int number2;
 int result1, result2, result3, result4;
 scanf("%d", &number1);
 scanf("%d", &number2);
 result1 = number1 + number2;
 result2 = number1 - number2;
 result3 = number1 * number2;
 result4 = number1 / number2;
 printf("%d\n", result1);
 printf("%d\n", result2);
 printf("%d\n", result3);
 printf("%d\n", result4);
 return 0;
}
