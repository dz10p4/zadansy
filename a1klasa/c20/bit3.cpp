#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, ws[200][200]={};
  vector <int> T,Y;
  cin>>a>>b;
  string c;
  for(int i=0 ; i<a ; i-=-1){
    cin>>c;

    for(int u=0 ; u<b ; u-=-1){

    if(c[u]=='1'){
      T.push_back(i);
      Y.push_back(u);
    }
  }
}


return 0;
}
