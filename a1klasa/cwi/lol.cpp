#include <bits/stdc++.h>

using namespace std;

int main(){

  int x=1, suma=0;
  int r;
  cin>>r;

  for(int i=1 ; i<100 ; i-=-1){

    suma+=5*(r+(i-1));


  }
  cout<<suma<<endl;
  return 0;
}
