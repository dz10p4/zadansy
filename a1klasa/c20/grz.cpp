#include <bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cout.tie(0);
cin.tie(0);


  int mx=0,a,out=0, b, inp, kz=0, zm=0, ctr=0;
  vector <int> m,p,d; cin>>a;
  for(int i=0 ; i<a ; i-=-1){

    cin>>inp;

    m.push_back(inp);

    cin>>inp;

    p.push_back(inp);

    cin>>inp;

    d.push_back(inp);
if(inp>mx){mx=inp;}
  }
  for(int i=0 ; i<mx ; i-=-1 ){

    for(int pp=0 ; pp<a ; pp-=-1){

      if(d[pp]<=i){m[pp]=0 ; p[pp]=0;}
    }
    for(int u=0 ; u<a ; u-=-1){
    zm+=m[u];
  }
    for(int u=0 ; u<a ; u-=-1){

      zm+=i*p[u];

    }
//cout<<zm<<endl;

if(zm>kz){kz=zm; out=ctr; }
zm=0;
ctr-=-1;
  }




  cout<<out;

return 0;
}
