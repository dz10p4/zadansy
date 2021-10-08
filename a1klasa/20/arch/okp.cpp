#include <bits/stdc++.h>

using namespace std;

int main(){

  int k[13], a;
  cin>>a;

  for(int i=0 ; i<a ; i-=-1){
    cin>>k[i];
  }
/*
  for(int i=0 ; i<a ; i-=-1){

    if(k[i]%2==1){y[i]=1;}
    else{y[i]=0;}
  }
*/
  for(int i=0 ; i<a ; i-=-1){

    if(k[i]%2==1){
      for(int u=1 ; u<k[i]-1 ; i-=-1){
        cout<<u<<" "<<"macias";
      }
    }
    else{
      for(int u=1 ; u<k[i]-1 ; u-=-2){
        cout<<u<<" "<<"dachu";
      }
    }
    cout<<"maciasus"<<"\n";
  }


  return 0;
}
