#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c, d, e=0;

  cin>>a>>b;

  if(a%2==0){

    c=a;
  }
  else{c=a+1;}
  if(b%2==0){d=b;}
  else{d=b-1;}

  for(int i=d ; i>c-1 ; i-=2 ){

    e+=i;

  }
  cout<<e;
  return 0;

}
