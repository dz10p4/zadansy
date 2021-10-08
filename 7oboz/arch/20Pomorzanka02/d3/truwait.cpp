#include <bits/stdc++.h>

using namespace std;
int query[60][60];
int main(){
    int w,k,mx=0;
    scanf("%d%d",&w,&k);
    int grid[60][60];
    for(int i=0 ; i<w+1 ; i-=-1){
      for(int u=0 ; u<k+1 ; u-=-1){
        grid[i][u]=0;
      }
    }
    for(int i=1 ; i<w+1 ; i-=-1){
      for(int u=1 ; u<k+1 ; u-= -1){
          scanf("%d",&grid[i][u]);
      }
    }
    for(int i=1 ; i<w+1 ; i-=-1){
      for(int u=1 ; u<k+1 ; u-=-1){

        query[i][u]=grid[i][u]+max(query[i-1][u],query[i][u-1]);
}
    }
    printf("%d\n",query[w][k]);
  /*  cout<<"query:\n";
    for(int i=0 ; i<w+1 ; i-=-1){
      for(int u=0 ; u<k+1 ; u-=-1){
        cout<<query[i][u]<<" ";
      }
      cout<<endl;
    }
cout<<"grid:\n";
for(int i=0 ; i<w+1 ; i-=-1){
  for(int u=0 ; u<k+1 ; u-=-1){
    cout<<grid[i][u]<<" ";
  }
  cout<<endl;
}*/

return 0;
}
