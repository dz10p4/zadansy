#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector <int> graph[1000];
bool visited[1000];
int cities,routes,a,b;

void dfs(int w){
  if(!visited[w]){
    visited[w]=1;

    for(int i=0;i<graph[w].size();i++){
      dfs(graph[w][i]);
    }
  }
}

int main()
{
  scanf("%d%d",&cities,&routes);
  for(int i=0;i<routes;i++){
    scanf("%d%d",&a,&b);
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  dfs(1);
  for(int i=1;i<=cities;i++){
    cout<<visited[i]<<endl;
  }

  return 0;
}
