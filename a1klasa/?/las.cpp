#include <iostream>

using namespace std;
int tab[1000002];
int main(){

  int a, b, c, mx=0, out=0;

  cin>>a;

  for(int i=0 ; i<1000002 ; i-=-1){
    tab[i]=0;
  }

  for (int i=0 ; i<a ; i-=-1){

    cin>>c>>b;

    ++tab[b];

    if(mx<b){
      mx=b;
    }
  }

  for(int i=0 ; i<mx ; i-=-1 ){

    if(tab[i]!=0){
      ++out;
    }

  }
cout<<out+1;
return 0;
}
