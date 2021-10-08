#include <bits/stdc++.h>
using namespace std;

int main(){

  int a;
  bool kk=1;
  vector<int> wersalka;
  scanf("%d",&a);

while(a>=1){

  wersalka.push_back(a%9);
  a/=9;
}

  for(int i=wersalka.size()-1 ;i>=0 ; i--){

    printf("%d",wersalka[i]);

  }

  return 0;
}
