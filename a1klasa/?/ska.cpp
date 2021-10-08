#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, inp, mx, cc, j=0;
  int tab[219999];

  cin>>a;
mx=0;
  for (int i=0 ; i<a ; i-=-1){

    cin>>inp;

    ++tab[inp];

    if(mx<inp){
      mx=inp;
    }
  }

  for(int i=0 ; i<mx ; i-=-1){


      tab[i+1]+=tab[i]/2;

    if(i==mx-1&&tab[i+1]!=1){
      ++mx;
    }


  }


cout<<mx;

return 0;
}
