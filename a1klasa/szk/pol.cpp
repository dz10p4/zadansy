#include <bits/stdc++.h>

using namespace std;

bool comp(long long int a,long long int b){
  bool c=0;

    if(a>b){c=1;}
  return c;
}


int main(){

  vector<long long> a, b;
  long long int inp, x, d, out;

  for(int i=0 ; i<4 ; i-=-1){
    cin>>inp;

    a.push_back(inp);
    cin>>inp;

    b.push_back(inp);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(comp(a[1], a[2])){

    x=a[1]-a[2];

  }
  else{x=a[2]-a[1];}
  if(comp(b[1], b[2])){

    d=b[1]-b[2];

  }
  else{d=b[2]-b[1];}

out=x*d;

if(out==1){cout<<0;}
else{cout<<out;}
return 0;
}
