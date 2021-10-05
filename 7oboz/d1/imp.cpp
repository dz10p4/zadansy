#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#define pb push_back
using namespace std;

int parent[50];
vector<int>G[100001];
bool visited[100001];
set<int>st[100001];


void defes(int w,int p)
{
    visited[w]=1;
    st[p].erase(w);
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defes(G[w][i],p);
    }
}

int find(int x)
{
    if(parent[x]==-1)
    {
        return x;
    }
    return find(parent[x]);
}


int main()
{
    int n,m,inp1,inp2,wyn=0;
    fill(parent,parent+50,-1);
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].pb(inp2);
    }

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=0 ; u<G[i].size() ; ++u)
        {
            int w=find(G[i][u]);
            int e=find(i);
            if(w==e)continue;
            parent[e]=w;
        }
    }

    for(int i=0 ; i<=n ; ++i)
    {
        int w=find(i);
        parent[i]=w;
    }

    for(int i=1 ; i<=n ; ++i)
    {
        if(parent[i]!=-1)
        st[parent[i]].insert(i);
    }

    for(int i=1 ; i<=n ; ++i)
    {
        if(st[i].size())
        defes(i,i);
        wyn+=st[i].size();
        fill(visited,visited+100000,0);
    }

    printf("%d",wyn);

    return 0;
}