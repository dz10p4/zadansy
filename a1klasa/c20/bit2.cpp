#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c[14000]={}, ctr=0;
  string j,m;
  cin>>a>>b;

  for(int i=0 ; i<a ; i-=-1){

    cin>>j;
    m=j;
    for(int u=0 ; u<b ; u-=-1){
      if(j[u]=='1'){
        c[ctr]=u;
        ctr++;
      }
    }

    for(int u=0 ; u<b ; i-=-1){

        m[u]=c[u]-u;

    }

  }


for(int i=0 ; i<b ; i-=-1){
  cout<<m[i];
}
cout<<"to jest stara wersja"
}
