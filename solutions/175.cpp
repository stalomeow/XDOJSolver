#include<stdio.h>

struct window {
 int depth;  //start from 1, the smaller the upper
 int cord[4];
}win[10];   //step1

int is_click(window& win, int posi[]) 
{
 if (posi[0] >= win.cord[0] && \
  posi[0] <= win.cord[2] && \
  posi[1] >= win.cord[1] && \
  posi[1] <= win.cord[3])
  return 1;
 else
  return 0; 
}   //step2

void exchange(window win[], int i,int n) 
{
 for (int j = 0; j < n; j++) {
  if (win[j].depth < win[i].depth) win[j].depth++;
 }
 win[i].depth = 1;
}   //step 3

int main()
{
 int n, m;
 scanf("%d%d", &n, &m);
 int click[50][2];
 for (int i = 0; i < n; i++) {    //input windows
  for (int j = 0; j < 4; j++) {
   scanf("%d", &win[i].cord[j]);
   win[i].depth = n - i;   
  }
 }
 for (int i = 0; i < m; i++) {   //input click areas
  for (int j = 0; j < 2; j++) {
   scanf("%d", &click[i][j]);
  }
 }
 for (int i = 0; i < m; i++) {
  int top[2] = { 0,11 };    //judge & find the upper page£¡
  for (int k = 0; k < n; k++) {
   if (is_click(win[k], click[i])) {
    if (win[k].depth < top[1]) {
     top[0] = k;
     top[1] = win[k].depth;
    }
   }
  }
  if (top[1] == 11) {
            printf("IGNORED\n");
  }
  else {
   printf("%d\n", top[0] + 1);
   exchange(win, top[0], n);
  }
  
 }
 return 0;
}
