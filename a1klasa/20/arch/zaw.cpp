#include <bits/stdc++.h>

using namespace std;

int main(){

  int a,b,c,d,zz,z,mxx=0, ll,khh=0,kk,cter=0;
  vector<int>l,m;

  cin>>a>>b;

  for(int i=0 ; i<a ; i-=-1){
    cin>>c>>d;
    l.push_back(c);
    m.push_back(d);
    if(mxx<c){mxx=c;}
  }
int WT[b*mxx];

for(int i=0 ; i<b*mxx+1 ; i-=-1){
  WT[i]=0;
}

for(int u=0 ; u<a ; u-=-1){
  ll=l[u];
  ++WT[ll];
for(int i=0 ; i<b ; i-=-1){

  ll=l[u]+cter;
  if(i%m[u]==0){cter=0;}
  ++WT[ll];
++cter;
}
  cter=0;

  }

sort(WT, WT+b*mxx);

for(int i=0 ; i<b*mxx ; i-=-1){
  if(WT[i]>khh){khh=WT[i];}
  else{break;}
}

cout<<khh;

  return 0;
}
