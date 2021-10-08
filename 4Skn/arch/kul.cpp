#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b=0, c=0;

  string xd;

  cin>>a>>xd;

  for (int i=0 ; i<a ; i-=-1){

    if(xd[i]=='B'){++b;}
    else{++c;}
  }

  for(int i=0 ; i<b ; i-=-1){

    cout<<"B";

  }
  for(int i=0 ; i<c ;  i-=-1){

    cout<<"C";

  }


  return 0;
}
