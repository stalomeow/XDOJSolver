#include <stdio.h>
struct student
{
 char name[22];
 int A;
 int B;
 int C;
 int D;
 int E;
 int F;
 int sum;
};struct student stu[101],ex;
int main()
{
 int i,n,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s %d %d %d %d %d %d", &stu[i].name, &stu[i].A, &stu[i].B, &stu[i].C, &stu[i].D, &stu[i].E, &stu[i].F);
  stu[i].sum=stu[i].A+stu[i].B+stu[i].C+stu[i].D+stu[i].E+stu[i].F;
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(stu[i].sum>stu[j].sum)
   {
    ex=stu[j];
    stu[j]=stu[i];
    stu[i]=ex;
   }
   else if(stu[i].sum==stu[j].sum)//成绩相等时， 
   {
    if(stu[i].F>stu[j].F) 
    {
     ex=stu[j];
        stu[j]=stu[i];
        stu[i]=ex; 
    } 
   }
  }
 }
 for(i=n-1;i>=0;i--)
 {
     printf("%s %d %d\n", stu[i].name, stu[i].sum, stu[i].F);
 }
 return 0;
}
