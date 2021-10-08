#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, x, y;
  char z;
  cin>>a>>b;
  vector <int> t;
  vector <int> w;
  for(int i=0 ; i<a ; i++){
  cin>>z;
  if(z=='N'){t.push_back(1);}
  else{t.push_back(0);}
  }
  /*for ( int i=0 ; i<a-b+1 ; i++ ){
    for( int u ; u<b ; u++){
      if(t[u]==0){x++;}
      if(t[u]==1){y++;}
    }
    if( x>y ){w.push_back(x);}
    else{w.push_back(y);}
    x=0;
    y=0;
  }
  sort(w.begin(), w.end());
*/
  //cout>>w[a-b]-b;
    for(int i=0 ; i<a ; i++){
      cout<<t[i];

    }
return 0;
}
