#include <stdio.h>
#include <vector>
using namespace std;
int query[60][60],grid[60][60];
int main(){
    vector<int> ttt;
    int w,k,mx=0;
    scanf("%d%d",&w,&k);
    for(int i=0 ; i<w+1 ; i-=-1)
    {
      for(int u=0 ; u<k+1 ; u-=-1)
      {
        grid[i][u]=0;
      }
    }
    for(int i=1 ; i<w+1 ; i-=-1)
    {
      for(int u=1 ; u<k+1 ; u-= -1)
      {
          scanf("%d",&grid[i][u]);
      }
    }
    for(int i=1 ; i<w+1 ; i-=-1)
    {
      for(int u=1 ; u<k+1 ; u-=-1)
      {
        query[i][u]=grid[i][u]+max(query[i-1][u],query[i][u-1]);
      }
    }
    printf("%d\n",query[w][k]);
    for(int i=w ; i>0 ;)
    {
    for(int u=k ; u>0 ;)
    {
      ttt.push_back(i);ttt.push_back(u);
      if(query[i-1][u]<=query[i][u-1]){u--;}
      else{i--;}
      if(i==1&&u==1){break;}
    }
    if(i==1){ttt.push_back(1);ttt.push_back(1);break;}
    }

    for(int i=0 ; i<ttt.size() ;i+=2)
    {
    printf("%d %d\n",ttt[i],ttt[i+1]);
    }
return 0;
}
