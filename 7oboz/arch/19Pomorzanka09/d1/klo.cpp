#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k, s, w, t[35], g, u;
  cin>>n>>k>>s;
w=0;
g=n;
u=0;
  for ( int i=0 ; i<n ; i++){
      cin>>t[i];
    }
    sort( t , t+n );
    for(int i=0 ; i<n ; i++){
      if(t[g]>s && w<s){

      }
      else{
        w=w+t[g];
      }
      u++;

      }
      g=n;
      if(u>k){

        for (int i=0 ; i<u-k ; i++){

          w=w-t[g];
          g--;
        }

      }
cout<<w;
  return 0;
}
