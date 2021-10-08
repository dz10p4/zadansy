#include <bits/stdc++.h>

using namespace std;

int silnia(int a){

  for (int i=1 ; i<a ; i++){

    a*=i;

  }
  return a;
}


int main(){
  int a, b, c, d, x;
  cin>>a>>b>>c;
  x=a+b+c;

//d=silnia(x)/(silnia(a)*silnia(b)*silnia(c));

  cout<<silnia(3);
}
