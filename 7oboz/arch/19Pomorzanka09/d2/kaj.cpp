#include <bits/stdc++.h>

using namespace std;

int main(){
bool y=1;
int a, b, t[65001], w, u, l, k;
  cin>>a>>b;
  w=0;
  u=0;
  l=b;
  for ( int  i=0 ; i<b ; i++ ){

    cin>>t[i];

  }
  sort( t , t+b );

  while(t[l-1]+t[0]>a){
      w++;
      l--;
  }

 while (t[l-1]+t[u]<=a && l>u){

    w++;
    l--;
    u++;
  }

cout<<w;

return 0;
}
