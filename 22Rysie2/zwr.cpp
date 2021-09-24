#include <bits/stdc++.h>
using namespace std;
bool visited[1000001];
vector<pair<int,int>> graph[1000001];
queue<pair<int,int>> q;
int costs[1000001];
int mx=__INT_MAX__;
void djextra(pair<int,int> xd)
{
    int w=xd.first;
    costs[graph[w][0].first]=min(costs[graph[w][0].first],costs[w]+graph[w][0].second);
    costs[graph[w][1].first]=min(costs[graph[w][1].first],costs[w]+graph[w][1].second);

    if(!visited[graph[w][0].first])
    {
        q.push(make_pair(graph[w][0].first,0));
        visited[graph[w][0].first]=1;
    }
    if(!visited[graph[w][1].first])
    {
        q.push(make_pair(graph[w][1].first,1));
        visited[graph[w][1].first]=1;
    }
    
}


int main()
{
    
    fill(costs,costs+1000000,mx);
    int n,p,k,inp1,inp2;
    scanf("%d%d%d",&n,&p,&k);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);

        graph[i+1].push_back(make_pair(inp1,0));
        graph[i+1].push_back(make_pair(inp2,1));

    }

    q.push(make_pair(p,0));
    visited[p]=1;
    costs[p]=0;
    while(!q.empty())
    {
        djextra(q.front());
        q.pop();
    }

    if(costs[k]==mx)printf("BRAK");
    else printf("%d",costs[k]);


    return 0;
}