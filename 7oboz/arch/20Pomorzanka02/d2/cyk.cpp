#include <bits/stdc++.h>
using namespace std;
bool visited[500010],color[500010],outt;
vector<int> graph[500010];
void dfs(int a, bool r){
  if(!visited[a]){visited[a]=1;
  color[a]=r;
  for(int i=0 ; i<graph[a].size();i-=-1){
  dfs(graph[a][i],!r);
  }}
  else{
    if(color[a]!=r){
      outt=1;
      return;
    }
  }
}


int main(){
  vector<bool> uuu;
  int a,t,n,m,x,y,cter=0;
  scanf("%d",&t);
  for(int i=0 ; i<t ; i-=-1){
    for(int u=0 ; u<500010 ; u-=-1){
      graph[u].clear();}
      outt=0;
    scanf("%d%d",&n,&m);
      for(int i=0 ; i<m ; i-=-1){
        scanf("%d%d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
      }

      for(int i=1 ; i<=n ; i-=-1){
        if(!visited[i]){dfs(i,1);}
      }


  if(outt){uuu.push_back(1);}
  else{uuu.push_back(0);}
}

for(int i=0 ; i<t ; i-=-1){

  if(uuu[i]){printf("TAK\n");}
  else{printf("NIE\n");}

}

  return 0;
}


/*2
4 6
1 2
1 3
1 4
2 3
2 4
3 4
4 4
1 2
2 3
3 4
4 1
*/
