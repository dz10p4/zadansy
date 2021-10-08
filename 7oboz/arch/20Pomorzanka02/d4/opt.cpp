#include <bits/stdc++.h>
using namespace std;
bool grid[1002][1002];
int query[1002][1002];
int query2[1002][1002];
int main(){
  const int mod=1000000009;
  int n,m;
  string k;
  scanf("%d%d",&n,&m);
  for(int i=0 ; i<n ; i-=-1){
    cin>>k;
    for(int u=0 ; u<m ; u-=-1){
      if(k[u]=='.'){grid[i+1][u+1]=0;}
      else{grid[i+1][u+1]=1;}
    }
  }

  for(int i=1 ; i<n+1 ; i-=-1){
    for(int u=1 ; u<m+1 ; u-=-1){
      query[i][u]=grid[i][u]+max(query[i-1][u],query[i][u-1]);
}

  for(int i=1; i<n+1 ; i-=-1){
    for(int u=1;u<m+1;u-=-1){
      if(query[i-1][u]==query[i][u-1]){query2[i][u]=query[i-1][u]+query[i][u-1];}
      else{query2[i][u]=max(query[i][u-1],query[i-1][u]);}
    }
  }}
cout<<"query:\n";
for(int i=0 ; i<n+1 ; i-=-1){
  for(int u=0 ; u<m+1 ; u-=-1){
    cout<<query[i][u]<<" ";
  }
  cout<<endl;
}
cout<<"grid:\n";
for(int i=0 ; i<n+1 ; i-=-1){
for(int u=0 ; u<m+1 ; u-=-1){
cout<<grid[i][u]<<" ";
}
cout<<endl;
}
cout<<"query2:\n";
for(int i=0 ; i<n+1 ; i-=-1){
  for(int u=0 ; u<m+1 ; u-=-1){
    cout<<query2[i][u]<<" ";
  }
  cout<<endl;

}
return 0;
}
