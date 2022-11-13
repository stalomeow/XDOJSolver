 #include<stdio.h>
int main()
{
 int p,i,j,iSum=0,iNum=1,m;
 /*i待判数，j判断循环数，
 iNum自2起的已经找到的素数个数 ，
 iSum目标素数和,
 m用于标记整除情况*/ 
 scanf("%d",&p);
 /*寻找素数*/ 
 for(i=3; ;i++)
 {
  m=0;
  /*判断一个数是否为素数*/ 
  for(j=2;j<i;j++)
  {
   /*判断一个数是否可以被某个小于自己的数整除*/ 
   if(i%j!=0)
   {
    m++;
   }
   else
   {
    continue;
   }
  }
  /*通过m标记量识别并捕捉目标素数*/ 
  if(m==i-2)
  {
   iNum++;
   if(iNum<=p+10&&iNum>=p)
   {
    iSum+=i;
   }
  }
  /*捕捉完后终止循环*/ 
  else if(iNum>p+10)
  {
   break;
  }
 }
 /*s输出结果*/ 
 printf("%d",iSum);
 return 0;
}
