#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int now;
int result;
int x,a,b;

int main() {

  cin>>x;

  pair <int,bool> dziopa[x*2];

  for(int i=0;i<x*2;i+=2){

    cin>>a>>b;

    dziopa[i].first=a;
    dziopa[i].second=0;
    dziopa[i+1].first=b;
    dziopa[i+1].second=1;
  }

  sort(dziopa,dziopa+(x*2));

  for(int i=0;i<x*2;i++){

    if(dziopa[i].second==false){

      now++;
      if(result<now)result=now;
    }
    else{
      now--;
    }
  }
  cout<<result;

  return 0;
}
