#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 float s,m;
 int t;
 scanf("%f%d",&s,&t);
 m=10;
 m=m+(t/5)*2;
 if(s<=3)
 printf("%.0f",m);
 else{
  if(s<=10){
  m=(s-3)*2+m;
  printf("%.0f",m);}
  else{
  m=m+14+(s-10)*3;
  printf("%.0f",m);}
 }
 return 0;}
