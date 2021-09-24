#include <bits/stdc++.h>
using namespace std;
vector<int> graph[100001];
vector<int> outcomes[100001];
queue<int> q;
bool visited[100001];
int costs[100001];
int wofgt[100001];
int main()
{
    int n,m,inp2,inp1,tt,outp=0,bru=0;

    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        graph[inp1].push_back(inp2);
        graph[inp2].push_back(inp1);
    }
    q.push(1);
    visited[1]=1;
    fill(costs,costs+100001,__INT_MAX__);
    costs[1]=0;
    while(!q.empty())
    {
        tt=q.front();
        q.pop();
        for(int i=0 ; i<graph[tt].size() ; ++i)
        {
            if(!visited[graph[tt][i]]){q.push(graph[tt][i]);visited[graph[tt][i]]=1;}
            costs[graph[tt][i]]=min(costs[tt]+1,costs[graph[tt][i]]);
        }
    }
    fill(visited,visited+100001,false);
    q.push(1);
    visited[1]=1;
    while(!q.empty())
    {
        tt=q.front();
        q.pop();
        for(int i=0 ; i<graph[tt].size() ; ++i)
        {
            if(!visited[graph[tt][i]]){q.push(graph[tt][i]);visited[graph[tt][i]]=1;}
            if(costs[tt]+1==costs[graph[tt][i]]){wofgt[graph[tt][i]]++;++bru;}
            else outp++;
        }
    }
    printf("%d",outp-bru-1);
    return 0;
}