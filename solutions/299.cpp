#include<stdio.h>
int main()
{
 int profit,reward;
 scanf("%d",&profit);
 if(profit<=100000){
  reward=profit*0.1;}
  else if(profit<=200000){
   reward=100000*0.1+ (profit-100000)*0.075;}
  else if(profit<=400000){
   reward=100000*0.1+100000*0.075+(profit-200000)*0.05;}
  else if(profit<=600000){
   reward=100000*0.1+100000*0.075+20000*0.05+(profit-400000)*0.03;}
  else if(profit<=1000000){
   reward=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(profit-600000)*0.015;}
  else if(profit>1000000){
   reward=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(profit-1000000)*0.01;}
  printf("%d",reward);
  return 0;
}
