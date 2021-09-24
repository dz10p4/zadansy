#include <bits/stdc++.h>
using namespace std;

vector<int>graph[300001];
int visited[300001];
int low[300001];
bool ou=1;

void defes(int w,int pw, int dep)
{
    visited[w]=dep;
    low[w]=1000000-1;

    for(int i=0 ; i<graph[w].size() ; ++i)
    {   
        if(graph[w][i]==pw){pw=0; continue;}

        if(!visited[graph[w][i]])
        {
            defes(graph[w][i],w,dep+1);
            low[w]=min(low[w],low[graph[w][i]]);  
        }
        else
        {
            low[w]=min(low[w],visited[graph[w][i]]);
        }
    }
    if(low[w]>=visited[w]&&w>1)
    {
        ou=0;
    }
}


int main()
{   
    int t,in1,in2,n,m;

    scanf("%d",&t);

    for(int ii=0 ; ii<t ; ++ii)
    {
        
        scanf("%d%d",&n,&m);
        if(ii>0)for(int i=1 ; i<=n ; ++i)graph[i].clear();
        for(int i=0 ; i<m ; ++i)
        {
            scanf("%d%d",&in1,&in2);
            graph[in1].push_back(in2);
            graph[in2].push_back(in1);
        }
        defes(1,0,1);

        for(int i=1 ; i<=n ; ++i)
        {
            if(!visited[i])ou=0;
        }

        if(ou)printf("TAK\n");
        else printf("NIE\n");

        fill(low,low+300000,0);
        fill(visited,visited+300000,0);
        ou=1;
    }







    return 0;
}