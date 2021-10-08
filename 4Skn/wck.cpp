#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int pw;
vector<int>graph[100001],dirn;
int edges[100001];
void defes(int w,int a)
{
    edges[w]=a;
    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        if(edges[graph[w][i]]==-1)defes(graph[w][i],a+1);
    }
}

int main()
{
    fill(edges,edges+100001,-1);
    int n,m,inp1,inp2;
    scanf("%d%d",&n,&m);
    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        if(i==0)pw=inp1;
        graph[inp1].pb(inp2);
        graph[inp2].pb(inp1);
        if(inp1==pw)dirn.pb(inp2);
        if(inp2==pw)dirn.pb(inp1);
    }
    if(dirn.size()==1){printf("BRAK");return 0;}

    defes(inp1,0);
    //cout<<"macias";
    for(int i=0 ; i<dirn.size() ;++i)
    {
        if(edges[dirn[i]]%2){printf("JEST");return 0;}
    }
    
    printf("BRAK");

    

    return 0;
}