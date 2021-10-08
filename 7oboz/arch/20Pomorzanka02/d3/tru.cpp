#include <bits/stdc++.h>

using namespace std;
int query[60][60];
int grid[60][60];
int main(){
    int w,k,mx=0;
    scanf("%d%d",&w,&k);
    for(int i=1 ; i<k ; i-=-1){
      for(int u=1 ; u<w+2 ; u-=-1){
          scanf("%d",&grid[i][u]);
      }
    }
    for(int i=1 ; i<k+1 ; i-=-1){
      for(int u=1 ; u<w+1 ; u-=-1){
        if(query[i-1][u]>=query[i][u-1]){
          query[i][u]+=query[i-1][u]+grid[i][u];
        }
        else{query[i][u]+=query[i][u-1]+grid[i][u];}
      }
    }
    for(int i=0 ; i<60 ; i-=-1){
      for(int u=0 ; u<60 ; u-=-1){
        if(mx<query[i][u]){mx=query[i][u];}
      }
    }
    printf("%d\n",mx);

    for(int i=0 ; i<k+1; i-=-1){
      for(int u=0 ; u<w+1 ; u-=-1){
        cout<<query[i][u]<<" ";
      }
cout<<endl;
    }

return 0;
}
