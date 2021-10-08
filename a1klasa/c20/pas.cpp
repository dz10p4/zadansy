#include <bits/stdc++.h>

using namespace std;
const int mxxx=1000001;
int grid[1000][1000];
int query[1000][1000];
int main()
{
  int n,m;

  scanf("%d%d",&n,&m);

  for(int i=0 ; i<n+2 ; i-=-1)
  {
    query[0][i]=mxxx;
  }
  for(int i=0 ; i<n+2 ; i-=-1)
  {
    query[n+1][i]=mxxx;
  }


  for(int i=1 ; i<=n ; i-=-1)
  {
    for(int u=1 ; u<=m ; u-=-1)
    {
      scanf("%d",&grid[i][u]);
      if(grid[i][u]==1){query[i][u]=mxxx;}
    }
  }


    cout<<"query:\n";
      for(int i=0 ; i<n+2 ; i-=-1){
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

  




return 0;
}
