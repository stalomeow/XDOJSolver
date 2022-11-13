#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COL 2
#define MID 3
int main()
{
 int arr1[ROW][MID];
 int arr2[MID][COL];
 int arr3[ROW][COL];
 int i,j,m,sum;
 for(i=0;i<ROW;i++)
   for(j=0;j<MID;j++)
   scanf("%d",&arr1[i][j]);
   for(i=0;i<MID;i++)
    for(j=0;j<COL;j++)
     scanf("%d",&arr2[i][j]);
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   sum=0;
   for(m=0;m<MID;m++)
   {
    sum=sum+arr1[i][m]*arr2[m][j];
   }
   arr3[i][j]=sum;
  }
 }
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<MID;j++)
  {
   printf("%5d",arr1[i][j]);
  }
  printf("\n");
 }
 printf("\n");
 for(i=0;i<MID;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%5d",arr2[i][j]);
  }
  printf("\n");
 }
 printf("\n");
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%5d",arr3[i][j]);
  }
  printf("\n");
 }
 return 0;
}
