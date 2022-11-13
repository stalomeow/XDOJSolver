#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&n);
    for(i=0;n!=1;)
    {
        m=n%2;
        switch(m)
        {
            case 0:n=n/2;i++;break;
            default:n=3*n+1;i++;break;
        }
    }
    printf("%d",i);
    return 0;
}
