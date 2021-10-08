#include <bits/stdc++.h>

using namespace std;

int main(){
double a, l, w, u, g;
    cin>>a;

    l=M_PI*10*2;

    w=(5*a)/l;

    u=w;

    u=round(w*1000);
    g=floor(u/1000);



  if((u/1000-g)*1000>0){


    cout<<g<<"."<<(u/1000-g)*1000;
    //cout<<u<<" "<<w<<" "<<g;
  }
  else{
      cout<<w<<".000";

  }
  return 0;
}
