#include <bits/stdc++.h>
using namespace std;
int main(){
long int a=0, u=0, e=0, pj=0, pd=0, q=0, k=0;
vector <long int> t;
vector <int> w;
bool y=0;
cin>>a;
  for (int i=0 ; i<a ; i++){
cin>>u;
t.clear();
    for (int o=0 ; o<u ; o++){

        cin>>e;
      t.push_back(e);
}
pj=u;
pd=u;
    while( t[0] == t[pj-1] ){
      pj--;

    }
    while( t[k] == t[t.size()-1] && k<t.size()+3 ){
      k++;
      pd--;
      if(t[k]!=t[t.size()-1]){
        y=1;
      }
    }
    if(pj==0){w.push_back(0);}
    if(pj>=pd && pj!=0 ){w.push_back(pj);}
    if(pj<pd && pj!=0){w.push_back(pd);}
  }
  for (int i=0 ; i<a ; i++){
    if(w[i]==0){
      cout<<"BRAK";
    }
    else{cout<<w[i]-1;}
if(i<a-1){cout<<endl;}
  }
  return 0;
}
