#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, t[10001], j;

    cin>>a;

    for (int i=0 ; i<a ; i++){

      cin>>t[i];

    }

    sort( t , t+a );
j=a;
    for ( int i=0 ; i<a-1 ; i++){

      if(t[i]==t[i+1]){j--;}

    }

  cout<<j;

  return 0;
}
