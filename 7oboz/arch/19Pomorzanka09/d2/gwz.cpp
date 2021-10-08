#include <bits/stdc++.h>

using namespace std;

int main(){

  bool a=0;

  int b, c=0;

  for( int i=0 ; i<7 ; i++){

    cin>>b;

    if(b==6){
      c++;
    }
    if(b==2){
      a=1;
    }

  }

  if (a==1 || c==0){
    cout<<"NIE";
    return 0;
  }
  for(int i=0 ; i<c ; i++){
    cout<<"*";
  }
  return 0;
}
