#include <bits/stdc++.h>

using namespace std;

int main(){

    int a=0, b=0, t[51], g[51], w=0, u=0;


    cin>>a>>b;
  u=b;

    for ( int i=0 ; i<a ; i++){

      t[i]=u;

      u++;


    }
    for (int i=0 ; i<a ; i++)
      {g[i]=t[i]+t[i+1];


    }
    for ( int i=0 ; i<a-1 ; i++ ){
      w=w+g[i];

    }




    cout<<w;
    return 0;
}
