#include <bits/stdc++.h>

using namespace std;

int main(){

  int x,y,n,r,jumper,TT[500][500],sumer=0;
  int T[500][500];
  cin>>n>>r;
  jumper=r*2+1;
  //cout<<"dachu";
  for(int i=0 ; i<n ; i-=-1){
    for(int u=0 ; u<n ; u-=-1){
      cin>>T[i][u];}}
      //cout<<"macias";
  for(int i=0 ; i<n; i-=-1){
    for(int u=0 ; u<n ; u-=-1){

      for(int ii=min(i+r,n-1) ; ii>jumper||ii>0; ii--){
        for(int uu=max(u-r,0); uu<jumper||uu<n-1 ; uu++){
        sumer++; cout<<"ii= "<<ii<<" uu="<<uu<<endl;
        }
      }

      cout<<i<<" "<<u<<" "<<"x="<<x<<" y="<<y<<endl;


      TT[i][u]=sumer;
      sumer=0;
    }
  }

//cout<<"macias";


  for(int i=0 ; i<n ; i-=-1){
    for(int u=0 ; u<n ; u-=-1){
      printf("%d ", TT[i][u]);
    }
    printf("\n");
  }
return 0;
}

/*
5 1
1 0 0 0 1
1 1 1 0 0
1 0 0 0 0
0 0 0 1 1
0 1 0 0 0
*/
