#include <bits/stdc++.h>

using namespace std;

int main(){

  string a;
  int xd, mm;

  cin>>a;

  xd=a[a.length()-2]*10+a[a.length()-1];

mm=xd%4;

if(a[0]=='0'){
  cout<<1;
  return 0;
}

if(mm==0){
  cout<<6;
}

if(mm==1){
  cout<<2;
}
if(mm==2){
  cout<<4;
}
if(mm==3){
  cout<<8;
}
if(mm==4){
  cout<<6;
}


return 0;
}
