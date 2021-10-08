#include <stdio.h>
#include <vector>
#define pb push_back
using namespace std;

int heights[1000015];
vector<int> cons[1000002];
bool visited[1000002];
//set<int> secik;
vector<int> pols;

void defes(int a)
{
  visited[a]=1;
  pols.pb(a);
  for(int i=0 ; i<cons[a].size() ; ++i)
  {
    if(!visited[cons[a][i]])defes(cons[a][i]);
  }

}



int main()
{
  int n,m,s,t,inp1,inp2;
  long long yes=0;
  scanf("%d%d%d%d",&n,&m,&s,&t);
  for(int i=0 ; i<n ; ++i)
  {
    scanf("%d",&heights[i+1]);
  }

  for(int i=0 ; i<m ; ++i)
  {
    scanf("%d%d",&inp1,&inp2);
    cons[inp1].pb(inp2);
    cons[inp2].pb(inp1);
  }

  defes(s);

  if(!visited[t]){printf("KSZYKSZY");return 0;}

  for(int i=0 ; i<pols.size() ; ++i)
  {
    yes+=heights[pols[i]];

  }

  printf("%lld",yes);


  return 0;
}
