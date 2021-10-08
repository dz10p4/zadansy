#include <bits/stdc++.h>

using namespace std;

int main(){

  unsigned long long a, b, w=0;

  cin>>a>>b;

  if(a==b){
    cout<<1;
    return 0;
  }
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }

  w++;
  }

  cout<<w+1;

return 0;
}
