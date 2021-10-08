#include <bits/stdc++.h>
using namespace std;

int main(){

int l,k,inp;
vector<int> jj;
scanf("%d%d",&l,&k);

for(int i=0 ; i<l ; i-=-1){
  scanf("%d",&inp);
  jj.push_back(inp);
}

sort(jj.begin(),jj.end(),greater<int>());

for(int i=0 ; i<k ; i-=-1){
  printf("%d\n",jj[i]);
}
  return 0;
}
