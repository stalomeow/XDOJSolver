#include<stdio.h>
int main()
{
 float stu[5][4];
 float aver(float (*)[4]);
 int fals(float (*)[4]);
 int well(float (*)[4]);
 int i,j,ans2,ans3;
 float ans1=0;
 for(i=0;i<5;i++)
 for(j=0;j<4;j++)
 //scanf("%f",&stu[i][j]);
 scanf("%f",*(stu+i)+j);
// float stu[][4]={{85,73,59,92},{93,95,89,88},{86,88,88,87},{59,51,52,68},{78,32,59,91}};
 ans1=aver(stu);
 ans2=fals(stu);
 ans3=well(stu);
 printf("%.1f %d %d",ans1,ans2,ans3);
 
}
float aver( float (*q)[4])
{
 int i;
 float ans=0;
 for(i=0;i<5;i++)
 ans+=*(*(q+i)+0);
 return ans/5.0;
}
int fals(float (*q)[4])
{
 int i,j,dan=0,per=0;
 for(i=0;i<5;i++)
 {
  for(j=0;j<4;j++)
  {
   if(*(*(q+i)+j)<60)
   dan++;
  }
  if(dan>=2)
  per++;  
     dan=0;
 }
 return per;
}
int well(float (*p)[4])
{
 int i,j,dan=0,per=0;
 float ans=0;
 for(i=0;i<5;i++)
 {
  for(j=0;j<4;j++)
  {
   ans+=*(*(p+i)+j);
   if(*(*(p+i)+j)>85)
   dan++;
  }
  if(ans/4.0>90)
  per++;
  else if(dan==4)
  per++;
  dan=0;
  ans=0;
 }
 return per;
}
