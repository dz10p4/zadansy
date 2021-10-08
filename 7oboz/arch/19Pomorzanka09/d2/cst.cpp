#include <bits/stdc++.h>

using namespace std;

int main(){
int a[10], w[3];

  for ( int i=0 ; i<6 ; i++){

    cin>>a[i];

  }

  if ( a[0]==a[2] || a[2]==a[4] || a[4]==a[0]){

    if(a[0]==a[2] && a[4]>a[0]){
      w[0]=3;
      if(a[1]>a[3]){
        w[1]=1;
        w[2]=2;
      }
      else{
        w[1]=2;
        w[2]=1;
      }
      if(a[0]==a[2] ){}


    }

  }

cout<<rand();


}
