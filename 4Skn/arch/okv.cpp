#include <bits/stdc++.h>

using namespace std;

int main(){

  int m, n, u, l, d, r, lctr=0, mm=0, hj=0;

  string h;

  char z;

  vector <string> tab;

  scanf("%d %d %d %d %d %d", &m, &n, &u, &l, &r, &d);

  for(int i=0 ; i<m ; i-=-1){

    cin>>h;

    tab.push_back(h);
  }



    for(int qq=0 ; qq<u ; qq-=-1){
for(int ww=0 ; ww<n+r+l ; ww-=-1){
      if((qq+ww)%2==0){z='#';}
      else{z='.';}
      cout<<z;
      }
      cout<<endl;
      ++lctr;
    }


    for(int i=0 ; i<m ; i-=-1 ){

      for(int qq=0 ; qq<l; qq-=-1){
        if((qq+lctr)%2==0){z='#';}
        else{z='.';}

        cout<<z;
        ++hj;
      }

      cout<<tab[i];

      for (int rr=0 ; rr<r ; rr-=-1){

        if((lctr+rr+n+hj)%2==0){z='#';}
        else{z='.';}

        cout<<z;

      }


      cout<<endl;
      ++lctr;
      hj=0;
}

    for(int qq=0 ; qq<d ; qq-=-1){
for(int ww=0 ; ww<n+r+l ; ww-=-1){
      if((lctr+ww)%2==0){z='#';}
      else{z='.';}
      cout<<z;
      }
      cout<<endl;
      ++lctr;
      ++mm;
    }



  return 0;
}
