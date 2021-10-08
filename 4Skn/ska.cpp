#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1000001];
int visited[1000001];
int b=1;
void defes(int w)
{
    visited[w]=b;
    for(int i=0 ; i<graph[w].size(); ++i)
    {
        if(!visited[graph[w][i]])defes(graph[w][i]);
    }
}

int main()
{
    int n,inp,outp=0;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&inp);
        graph[inp].push_back(i);
        graph[i].push_back(inp);
    }
    for(int i=1 ; i<=n ; ++i)
    {
        if(!visited[i]){defes(i);b++;}        
    }

    for(int i=0 ; i<=n ; ++i)outp=max(outp,visited[i]);

    printf("%d",outp);

    return 0;
}