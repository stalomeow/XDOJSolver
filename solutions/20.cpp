#include <stdio.h>
int main()
{
 int number1;
 char opt;
 int number2;
 int result;
 scanf("%d", &number1);
 scanf("%c", &opt);
 scanf("%d", &number2);
 if(opt == '+'){
  result = number1 + number2;
 }else if(opt == '-'){
  result = number1 - number2;
 }else if(opt == '*'){
  result = number1 * number2;
 }else if( (opt == '/')&&(number2 != 0) ){
  result = number1 / number2;
 }else if( (opt == '%')&&(number2 != 0) ){
  result = number1 % number2;
 }
 printf("%d%c%d=%d", number1, opt, number2, result);
 return 0;
}

