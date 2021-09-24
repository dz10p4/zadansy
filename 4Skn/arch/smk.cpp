#include <bits/stdc++.h>
using namespace std;
int mx=__INT_MAX__;
queue<int> q;
vector<int> graph[2000001];
bool grid[1021][1021];
int costs[2000001];
bool visited[2000001];
char k[2000001];

void befes(int w)
{
    for(int i=0;i<graph[w].size();i++)
    {
        costs[graph[w][i]]=min(costs[graph[w][i]],costs[w]+1);

        if(!visited[graph[w][i]])
        {
            q.push(graph[w][i]);
            visited[graph[w][i]]=1;
        }
    }
}


int main()
{
    fill(costs,costs+1000010,mx);
    int n,m,xp,yp,xk,yk,cter=0;
    //string k;

    scanf("%d%d%d%d%d%d",&n,&m,&xp,&yp,&xk,&yk);
    int mp=(yp-1)*m+xp,mk=(yk-1)*m+xk;
    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%s",k);
        for(int u=0 ; u<m ; ++u)
        {
            if(k[u]=='.')grid[i][u+1]=1;
        }
    }

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            if(grid[i][u])
            {
                if(grid[i][u-1]==1)
                {
                    graph[(i-1)*m+u].push_back((i-1)*m+u-1);
                    //graph[(i-1)*m+u-1].push_back((i-1)*m+u);
                }
                if(grid[i][u+1]==1)
                {
                    //graph[(i-1)*m+u+1].push_back((i-1)*m+u);
                    graph[(i-1)*m+u].push_back((i-1)*m+u+1);
                }
                if(grid[i+1][u]==1)
                {
                    //graph[i*m+u].push_back((i-1)*m+u);
                    graph[(i-1)*m+u].push_back(i*m+u);
                }
                if(grid[i-1][u]==1)
                {
                    //graph[(i-2)*m+u].push_back((i-1)*m+u);
                    graph[(i-1)*m+u].push_back((i-2)*m+u);
                }
            }
        }
    }
    int t,xpt,ypt,xkt,ykt;
    scanf("%d",&t);
    for(int i=0 ; i<t ; ++i)
    {
        scanf("%d%d%d%d",&xpt,&ypt,&xkt,&ykt);
        graph[(ypt-1)*m+xpt].push_back((ykt-1)*m+xkt);
    }

    q.push(mp);
    visited[mp]=1;
    costs[mp]=0;
    while(!q.empty())
    {
        befes(q.front());
        q.pop();
    }

    if(costs[mk]==mx)printf("-1");
    else printf("%d",costs[mk]);

    return 0;
}