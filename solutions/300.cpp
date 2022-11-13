#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int n,d1,d2,d3,d4,d5,d6,d7,d8;
 scanf("%d",&n);
 if(n<10)
  printf("1"); 
 else if(n<100){
   d8=n/10,n=n%10;
   n=n+d8;
    printf("2");} 
 else if(n<1000){
   d7=n/100,n=n%100;
   d8=n/10,n=n%10;
   n=n+d7+d8; 
   printf("3");} 
 else if(n<10000){
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10; 
   n=n+d7+d8+d6;
    printf("4");} 
 else if(n<100000){
   d5=n/10000,n=n%10000;
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10; 
   n=n+d7+d8+d6+d5;
    printf("5");} 
 else if(n<1000000){
   d4=n/100000,n=n%100000;
   d5=n/10000,n=n%10000;
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10; 
   n=n+d7+d8+d6+d5+d4;
    printf("6");} 
 else if(n<10000000){
   d3=n/1000000,n=n%1000000;
   d4=n/100000,n=n%100000;
   d5=n/10000,n=n%10000;
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10; 
   n=n+d7+d8+d6+d5+d4+d3;
    printf("7");} 
 else if(n<100000000){ 
      d2=n/10000000,n=n%10000000;
   d3=n/1000000,n=n%1000000;
   d4=n/100000,n=n%100000;
   d5=n/10000,n=n%10000;
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10;
   n=n+d7+d8+d6+d5+d4+d3+d2;
   printf("8");} 
 else{
   d1=n/100000000,n=n%100000000;
   d2=n/10000000,n=n%10000000;
   d3=n/1000000,n=n%1000000;
   d4=n/100000,n=n%100000;
   d5=n/10000,n=n%10000;
   d6=n/1000,n=n%1000;
   d7=n/100,n=n%100;
   d8=n/10,n=n%10;
   n=n+d7+d8+d6+d5+d4+d3+d2+d1;
   printf("9");} 
 return 0;
}
