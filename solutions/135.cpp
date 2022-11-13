#include <stdio.h>
#include <string.h>
int main(){
 int a[100]={0}; 
 int i=0,j,temp,cnt=0;  
  char ch;
 ch=getchar(); //一个一个读，当时~~比较笨~~ 不会用gets，只会用这个
 while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
  ch = getchar(); 
 }
    while(ch!= EOF && ch!='\r'&&ch!='\n'){ //读到了手动结束（windows是ctrl+z）或换行符时
     if(ch>='0'&&ch<='9'){
      a[i]=a[i]*10+ch-'0';//很重要，因为一个一个读的话连续的数字要拼接成整数
    }
     ch = getchar();
  while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
   ch = getchar();//同上
   if(ch>='0'&&ch<='9'){
    i++;
    cnt++;
   }
  }
 }
 for(i=0;i<cnt;i++){
  for(j=0;j<cnt;j++){
   if(a[j]<a[j+1]){ 
    temp = a[j];      
    a[j] = a[j+1];      
    a[j+1] = temp;
   } 
  }
 }//简单的冒泡排序
 for(i=0;i<=cnt;i++){
  printf("%d ", a[i]);
 }
 return 0;
}
