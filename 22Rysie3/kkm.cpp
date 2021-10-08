#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> graph[500001];
bool visited[500001];
int qors[500001];

void defes(int w, int pw,int k)
{
    if(pw){qors[w]=qors[pw]^k;}

    visited[w]=1;

    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        if(!visited[graph[w][i].first]){defes(graph[w][i].first,w,graph[w][i].second);}

    }

}


int main()
{
    int n,q,inp1,inp2,inp3,ph;
    scanf("%d%d",&n,&q);

    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d%d",&inp1,&inp2,&inp3);
        ph=inp1;
        graph[inp1].push_back({inp2,inp3});
        graph[inp2].push_back({inp1,inp3});
    }

    defes(ph,0,0);
    
    for(int i=0 ; i<q ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        printf("%d\n",qors[inp1]^qors[inp2]);
    }

    return 0;
}