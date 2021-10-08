#include <bits/stdc++.h>

using namespace std;

int main(){

  int a,mx=0,t[30001], dp[30001]={};
  cin>>a;
  for(int i=0 ; i<a ; i-=-1){
    cin>>t[i];
  }
  sort(t, t+a);
  dp[0]=1;
  dp[1]=2;
  dp[2]=3;
  for(int i=2; i<a-2 ; i-=-1){
    if(t[i-2]+t[i-1]<=t[i]){dp[i]=1;}
    else{dp[i]=dp[i-1]+1;}
  }
  for(int i=0 ; i<30001 ; i-=-1){
    if(mx<dp[i]){mx=dp[i];}
  }
  cout<<mx;
  return 0;
}
