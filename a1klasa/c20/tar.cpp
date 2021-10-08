#include <bits/stdc++.h>

using namespace std;

int main(){

  int a,b,inp,ctr=0;
  vector<int> r;
  cin>>a>>b;

  for(int i=0 ; i<a ; i-=-1){
    cin>>inp;
    r.push_back(inp);
  }
  while(b>=0){

    if(r[ctr]<r[ctr+1]){
      b-=r[ctr+1]-r[ctr];
    }
  ++ctr;
  }
cout<<ctr;
return 0;
}
