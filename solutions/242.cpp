#include <stdio.h>
struct student
{
 int xuehao;
 char name[12];
 int A;
 int B;
 int C;
 double aver;
};struct student stu[101],ex;
int main()
{
 int i,n,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %s %d %d %d", &stu[i].xuehao, &stu[i].name, &stu[i].A, &stu[i].B, &stu[i].C);
  stu[i].aver=(stu[i].A+stu[i].B+stu[i].C)*1.0/3.0;
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(stu[i].aver>stu[j].aver)
   {
    ex=stu[j];
    stu[j]=stu[i];
    stu[i]=ex;
   }
   else if(stu[i].aver==stu[j].aver)//平均成绩相等时， 
   {
    if(stu[i].xuehao<stu[j].xuehao)//比较学号大小 
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
     printf("%d %s %.1f\n",stu[i].xuehao,stu[i].name,stu[i].aver);
 }
 return 0;
}
