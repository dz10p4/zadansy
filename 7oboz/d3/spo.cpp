#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <bitset>
#include <set>
#include <stack>
#define pb push_back
using namespace std;

int kosaraju[32000],nn=1;
vector<int>G[32000],GI[32000];
bitset<32000>visited;
stack<int>st;

void dfs(int w)
{
    visited[w]=1;

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])dfs(G[w][i]);
    }
    st.push(w);
}

void dfs2(int w)
{
    visited[w]=1;
    kosaraju[w]=nn;
    for(int i=0 ; i<GI[w].size() ; ++i)
    {
        if(!visited[GI[w][i]])dfs2(GI[w][i]);
    }
}


int main()
{
    int n,m,a,b;

    scanf("%d%d",&n,&m);
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d",&a,&b);

        a*=2;b*=2;
        G[a].pb(b+1);
        G[b].pb(a+1); 

        GI[b+1].pb(a);
        GI[a+1].pb(b);       
    }

    for(int i=1 ; i<=n ; ++i)
    {
        G[i*2].pb(i*2+3);
        G[i*2+2].pb(i*2+1);
        G[i*2+1].pb(i*2+2);
        G[i*2+3].pb(i*2);

        GI[i*2+3].pb(i*2);
        GI[i*2+1].pb(i*2+2);
        GI[i*2+2].pb(i*2+1);
        GI[i*2].pb(i*2+3);
    }


    for(int i=2 ; i<=n*2+1 ; ++i)
    {
        if(!visited[i])dfs(i);
    }
    
    visited=0;

    while (!st.empty())
    {
        if(!visited[st.top()]){dfs2(st.top());nn++;}
        st.pop();
    }
    
    


    return 0;
}