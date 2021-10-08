#include <bits/stdc++.h>

using namespace std;

int main(){
  bool j=1, k=0;
  int a;
  char b, c, d;
  string u;

  cin>>a>>u;

  for (int i=0 ; i<a ; i++){
    if(u[i]==u[i+1]&&k==1){
      j=0;
    }
    if(u[i]==u[i+1]){
      k=1;
    }


}
  if(u[0]==u[a-1]&&k==1){j=0;}

  if(j==0){
    cout<<"NIE";
  }
  else{cout<<"TAK";}

  return 0;
}
