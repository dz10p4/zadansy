#include <bits/stdc++.h>

using namespace std;


int main(){


int l=0, m=0, n=0;
string f;
char a, b;

cin>>l;
cin>>f;

for ( int i=0 ; i<l ; i++ ) {

      a=f[i];
      b=f[i+1];

      if(a!=b){
        m=n;
        n=0;
      }
      else{n++;}


}
if(m==0){m=n;}
//if(m!=l){m++;}
cout<<m;

return 0;
}
