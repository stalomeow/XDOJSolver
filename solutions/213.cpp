 #include<stdio.h>
 int main()
 {
  void place(int *p,int a,int b);
  int num[50],*p1,m,n;
  scanf("%d%d",&m,&n);
  for(p1=num;p1<(num+m*n);p1++)
  scanf("%d",p1);
  p1=num;
  place(p1,m,n);
  return 0;
 } 
 
 void place(int *p,int a,int b)
 {
  int i,j,t,flag=1;
  for(i=0;i<a*b-1;i++) 
  for(j=0;j<a*b-1-i;j++) 
  if(*(p+j+1)<*(p+j)) 
  {
   t=*(p+j);
   *(p+j)=*(p+j+1);
   *(p+j+1)=t;
  }
  for(i=0;i<a;i++)
  {
   if(flag==1)
   {
    flag=0;
    for(j=b*(i+1)-1;j>=b*i;j--)
    {
     printf("%3d",*(p+j)); 
     if(j==b*i && i!=a-1) printf("\n");
    }
   }
   else
   {
    flag=1;
    for(j=b*i;j<b*(i+1);j++)
    {
     printf("%3d",*(p+j));
     if(j==b*(i+1)-1 && i!=a-1) printf("\n");
    }
   }
  }
 }
