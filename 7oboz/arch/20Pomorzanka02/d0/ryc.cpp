#include <bits/stdc++.h>

using namespace std;

int main(){

  string a,b[100];
  char k,g,m;
  int y=0, yy=0;
  bool hh=0, jj=0;
  cin>>a;
  k=tolower(a[0]);

  for(int i=0 ; i<a.length() ; i-=-1){
    y++;
    if(a[i]==' '){break;}
  }
  for(int i=y+1 ; i<a.length() ; i-=-1){

    b[i]=a[i];
    cout<<a[i];
    yy++;
    if(a[i]==' '){break;}
  }
  k=tolower(a[0]);
  cout<<k<<b[0]<<b[1]<<b[3];

  return 0;
}
