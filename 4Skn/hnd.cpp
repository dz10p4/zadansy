#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int>G[100001];
bool visited[100001];
int mdpt,mnode;
queue<int>q;

void defes(int w,int dpt)
{
    visited[w]=1;
    if(G[w].size()>=3&&mdpt<dpt){mnode=w;mdpt=dpt;}

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defes(G[w][i],dpt+1);
    }
}



int main()
{
    int n,inp1,inp2;
    scanf("%d",&n);
    
    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].pb(inp2);
        G[inp2].pb(inp1);        
    }

    defes(1,0);
    fill(visited,visited+100000,0);
    mdpt=0;
    defes(mnode,0);


    printf("%d",mdpt);

    return 0;
}