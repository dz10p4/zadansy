#include <bits/stdc++.h>
using namespace std;

int nodes[100001];
vector<int>graph[100001],graphr[100001];
int dieglocke=0;
int timetable[100001];
bool visited[100001];



void defes(int w)
{
    visited[w]=1;
    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        if(!visited[graph[w][i]])
        {
            dieglocke++;
            defes(graph[w][i]);
            dieglocke++;
            nodes[graph[w][i]]=dieglocke;
        }
    }
    nodes[w]=dieglocke+1;
}



int main()
{
    int n,k,inp;

    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&timetable[i+1],&k);

        for(int u=0 ; u<k ; ++u)
        {
            scanf("%d",&inp);
            graph[inp].push_back(i+1);
            graphr[i+1].push_back(inp);
        }
    }

    for(int i=1; i<=n ; ++i)
    {
        if(!visited[i])
        {
            dieglocke++;
            defes(i);
            dieglocke++;            
        }
    }






    return 0;
}