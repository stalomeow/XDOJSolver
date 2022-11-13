#include <stdio.h>
int main()
{
 int n,a=0,b,c,sum=0;
 scanf("%d", &n);
 c=n;//c即初始的n值 
    // 翻转
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        a=a*10 +b;
        n/=10;
    }
    // 判断
    if(c==a)
        printf("%d",sum);
    else
        printf("no");
    return 0;
}
