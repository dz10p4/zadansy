#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c, d=0;

  cin>>a;

  for (int i=0 ; i<a ; i-=-1){

    scanf("%d%d", &b, &c);

    if(b>c){d+=b;}
    else{d+=c;}

  }
cout<<d;
  return 0;
}
