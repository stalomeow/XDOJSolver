#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,y,n;
 scanf("%d%d",&a,&n);
 if(a%400==0||(a%100!=0&&a%4==0)) {
      if(n<=31)
      printf("%d %d",1,n);
     else if(n<=60)
      printf("%d %d",2,n-31);
     else if(n<=91)
      printf("%d %d",3,n-60);
     else if(n<=121)
      printf("%d %d",4,n-91);
     else if(n<=152)
      printf("%d %d",5,n-121);
     else if(n<=182)
      printf("%d %d",6,n-152);
     else if(n<=213)
      printf("%d %d",7,n-182);
     else if(n<=244)
      printf("%d %d",8,n-213);
     else if(n<=274)
      printf("%d %d",9,n-244);
     else if(n<=305)
      printf("%d %d",10,n-274);
     else if(n<=335)
      printf("%d %d",11,n-305);
     else 
      printf("%d %d",12,n-335);
    }
  else{
      if(n<=31)
      printf("%d %d",1,n);
     else if(n<=59)
      printf("%d %d",2,n-31);
     else if(n<=90)
      printf("%d %d",3,n-59);
     else if(n<=120)
      printf("%d %d",4,n-90);
     else if(n<=151)
      printf("%d %d",5,n-120);
     else if(n<=181)
      printf("%d %d",6,n-151);
     else if(n<=212)
      printf("%d %d",7,n-181);
     else if(n<=243)
      printf("%d %d",8,n-212);
     else if(n<=273)
      printf("%d %d",9,n-243);
     else if(n<=304)
      printf("%d %d",10,n-273);
     else if(n<=334)
      printf("%d %d",11,n-304);
     else 
      printf("%d %d",12,n-334);
    }
  
  
  
 return 0;
}
