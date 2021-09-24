#include <bits/stdc++.h>
using namespace std;

vector<int>G[201];
int str1,str2,w1,w2,wyn=INT_MAX;
bool visited[201];
int dpth1[201],dpth2[201];

void defs1(int w,int dpt)
{
    visited[w]=1;
    if(dpt>str1){str1=dpt;w1=w;}
    dpth1[w]=dpt;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defs1(G[w][i],dpt+1);

    }
}

void defs2(int w, int dpt)
{
    visited[w]=1;
    if(dpt>str2){str2=dpt;w2=w;}
    dpth2[w]=dpt;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defs2(G[w][i],dpt+1);

    }

}

void defl(int w)
{
    visited[w]=1;

    wyn=min(abs(dpth1[w]-dpth2[w]),wyn);

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defl(G[w][i]);

    }


}


int main()
{
    int n,inp1,inp2;
    scanf("%d",&n);
    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);

        G[inp1].push_back(inp2);
        G[inp2].push_back(inp1);
    }

    defs1(1,1);
    fill(visited,visited+200,0);
    defs2(w1,0);
    fill(visited,visited+200,0);
    defl(1);

    printf("%d",wyn);

    return 0;
}