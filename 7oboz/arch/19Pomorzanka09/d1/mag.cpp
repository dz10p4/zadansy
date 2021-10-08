#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <char> T;
    char u;
    int n, l;
    vector <int> R;

    cin>>n>>l;

    for (int i=0 ; i<n ; i++ ){
      cin>>u;
      T.push_back(u);
      }
    for ( int i=0 ; i<n ; i++){
      if( T[i]!=T[i+1])
      R.push_back(i);
      }
   for ( int i=0 ; i<n ; i++ ){
      cout<<R[i]<<endl;

    }

return 0;
}
