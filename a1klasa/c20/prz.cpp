#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a[11000]={}, b[11000]={}, inp1, inp2, mx1=0, mx2=0, mn1=11000,mn2=11000;

  scanf("%d", &n);

  for(int i=0 ; i<n ; i-=-1){

    scanf("%d %d\n" &inp1, &inp2);

    a[inp1]++;
    b[inp2]++;
    if(inp1>mx1){mx1=inp1;}
    if(inp2>mx2){mx2=inp2;}
  }

  


return 0;
}
