#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v;
  int ee=0,cter=0,mx=0,inp,a;
  cin>>a;
  bool p=0;
  for(int i=0 ; i<a ; i++){
  cin>>inp;
  if(inp>mx){mx=inp;}
  v.push_back(inp);}
  sort(v.begin(), v.end());

  while(p==0){

  if(v[ee]+v[ee+1]<=mx){++cter;}
  else{break;}
++ee;
  }
  cout<<cter;
return 0;
}
