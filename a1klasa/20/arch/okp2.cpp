#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b[1000];

  cin>>a;

  for(int i=0 ; i<a ; i-=-1){

    cin>>b[i];

  }
for(int i=0 ; i<a ; i-=-1){

  if(b[i]==1 || b[i]==2 ){

    cout<<1;

  }
  else if(b[i]%2==1){
    for(int u=1 ; u<=b[i]-1 ; u-=-1){
      cout<<u<<" ";
    }
  }
  else{
    for(int u=1 ; u<=b[i]-1 ; u-=-2){
      cout<<u<<" ";
    }

  }
  cout<<"\n";
}

return 0;

}
