#include <bits/stdc++.h>
using namespace std;
int mx,xd;
vector<int> cons[200001];
bool visited[200001];
void defes(int a, int w)
{
  visited[a]=1;
  if(mx<w){mx=w;xd=a;}
  for(int i=0 ; i<cons[a].size() ; ++i)
  {
    if(!visited[cons[a][i]])defes(cons[a][i],w+1);


  }




}


int main()
{

  int n,inp1,inp2,bruh;
  scanf("%d",&n);

  for(int i=0 ; i<n-1 ; ++i)
  {
    scanf("%d%d",&inp1,&inp2);

    cons[inp1].push_back(inp2);
    cons[inp2].push_back(inp1);

  }

  defes(1,0);

  bruh=mx;mx=0;

  fill(visited,visited+200000,0);

  defes(xd,0);

  printf("%d",mx);


  return 0;
}
