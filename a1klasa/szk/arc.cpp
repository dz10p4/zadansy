#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, n=0, w=0, u=0, k=0;;
    string b;

    cin>>a>>b;

for(int i=0 ; i<a ; i++){

    if(b[i]!=b[i+1] && i!=a-1){

        n++;

      }
      else{
      n=n+1;
if(n>w){w=n;}
n=0;
}
}

    cout<<w;


    return 0;

}
