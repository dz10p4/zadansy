#include <bits/stdc++.h>

using namespace std;

int main(){

  string a;
  bool t=0, y=0;
  int b, c=0, m=0, v, ll=0;

  cin>>b;

  for(int i=0 ; i<b ; i-=-1){

    cin>>a;
ll=a.length()-1;

    for(int u=0 ; u<ll ; u-=-1 ){

      if(a[u]=='1'){

        v=u;
        break;
      }
}
    if(v!=-1){

      for(int p=v ; p<ll+1 ; p-=-1){

        if(a[p]=='3'){
        
          ++c;
          break;
        }
      }
    }

y=0;t=0;v=-1;
  }

if(c==0){
  cout<<"NIE";
}
else{
cout<<c;
}
  return 0;
}
