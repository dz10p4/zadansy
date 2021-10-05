#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <stack>
#include <bitset>
#define pb push_back
using namespace std;
vector<int>G[100001],GI[100001];
stack<int>st;
bitset<100001>visited;
int kosaraju[100001],nn;
bool cwy[100001],cwh[100001],kpr[100001];

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
    int n,m,inp1,inp2,w1=0,w2=0;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].pb(inp2);
        GI[inp2].pb(inp1);
    }
    
    for(int i=1 ; i<=n ; ++i)
    {
        if(!visited[i])dfs(i);
    }
    //fill(visited,visited+100000,0);
    visited=0;
    while(!st.empty())
    {
        if(!visited[st.top()]) {
            nn++;
            dfs2(st.top());
        }
        st.pop();
    }
    
    for(int i=1 ; i<=n ; ++i)
    {
        for (auto x : G[i]) {
            inp1 = kosaraju[i];
            inp2 = kosaraju[x];
            if (inp1 != inp2) {
                cwy[inp1] = true;
                cwh[inp2] = true;
            }
        }
    }

    inp1 = 0;
    inp2 = 0;

    for (int i = 1; i <= nn; i++) {
        if (!cwy[i]) inp1++;
        if (!cwh[i]) inp2++;
    }

    printf("%d", max(inp1,inp2));

    return 0;
}
