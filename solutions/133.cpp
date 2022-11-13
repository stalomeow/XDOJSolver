#include <bits/stdc++.h>
using namespace std;

struct dxs{//多项式...的拼音
 int ratio = 0;//系数 
 int index = 0;//指数 
 
 bool operator < (const dxs& s){//重载 < 运算符
  return index < s.index;
 }
};

int printDXS(dxs in, int pos){//输出一项; 返回0代表该项系数为0; 返回1代表输出了一项 
 if(in.ratio == 0)
  return 0;
 else{ 
  if(in.ratio > 0 && pos != 0)
   cout << "+"; 
  if(in.index == 0){
   cout << in.ratio;
   return 1; 
  }
  else if(in.index == 1){
   if(in.ratio == 1){
    cout << "x";
    return 1;
   }
   if(in.ratio == -1){
    cout << "-x";
    return 1;
   }
   cout << in.ratio << "x";
   return 1;
  }
  else{
   if(in.ratio == 1){
    cout << "x^" << in.index;
    return 1;
   }
   if(in.ratio == -1){
    cout << "-x^" << in.index;
    return 1;
   }
   cout << in.ratio << "x^" << in.index;
   return 1; 
  }
 } 
}

void merge(dxs& a, dxs& b, int op){//合并同类项, 传引用来修改实参 
 if(op == 0)
  a.ratio = a.ratio + b.ratio;
 else 
  a.ratio = a.ratio - b.ratio;
}

int main(){
 int n, m, t;
 cin >> n >> m >> t;
 vector<dxs> a, b;//第一行, 第二行 
 
 for(int i = 0;i < n;i++){
  dxs t;
  cin >> t.ratio >> t.index;
  a.push_back(t);
 }
 
 for(int i = 0;i < m;i++){
  dxs t;
  cin >> t.ratio >> t.index;
  b.push_back(t);
 }
 
 for(int y = 0;y < m;y++){
  for(int x = 0;x < n;x++){
   if(b[y].index == a[x].index){//指数相等
    merge(a[x], b[y], t);
    goto END; 
   }
  }
  //重要 
  if(t == 1)
   b[y].ratio = -b[y].ratio;//系数取反
  a.push_back(b[y]);
  END:; 
 }
 
 int outCnt = 0;//记录输出了多少项, 毕竟 首项前面不能有+号 
 sort(a.begin(), a.end());
 for(unsigned int i = 0;i < a.size();i++){
  if(printDXS(a[i], outCnt))
   outCnt++;
 }
 return 0; 
} 
