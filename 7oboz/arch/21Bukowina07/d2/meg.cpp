#include <bits/stdc++.h>
using namespace std;

const int N=262144;
bool visited[250001];
int mark=0,gmark=1,qry,nodeGroup[2501],nodeTranslator[2501],gcount[2501],gcter,tree[N*2],TD[2501];
vector<int>G[250001],P[250001];
pair<int,int>groupParam[2501];
void defes(int w,int dpth)
{
    visited[w]=1;
    
    if(w!=1){nodeTranslator[w]=mark;gcter++;mark++;nodeGroup[nodeTranslator[w]]=gmark;}
    TD[nodeTranslator[w]]=dpth;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defes(G[w][i],dpth+1);
        if(w==1){gcount[gmark]=gcter;gcter=0;gmark++;}
    }

}

void add(int w,int p,int k,int x,int y)
{

    if(p<y || k>x)return;
    if(p>=x&&y<=k)
    {
        tree[w]++;
        return;
    }
    add(w*2,p,(p+k)/2,x,y);
    add(w*2+1,(p+k)/2+1,k,x,y);
}

int query(int w)
{   
    if(w==1)return qry; 

    qry+=tree[w];
    query(w/2);
    return qry;
}



int main()
{
    int m,n,inp1,inp2;
    char c;
    scanf("%d",&n);
    nodeTranslator[1]=-1;
    
    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].push_back(inp2);
        G[inp2].push_back(inp1);
    }
    defes(1,0);
    for(int i=1 ; i<=n ; ++i)
    {
        tree[N+1+i]=TD[i];
    }
    int hhh=1;
    scanf("%d\n",&m);
    for(int i=1 ; gcount[i]!=0 ; ++i)
    {
        groupParam[i].first=hhh;
        groupParam[i].second=hhh+gcount[i]-1;
        hhh+=gcount[i];
    }
    for(int i=0 ; i<n+m-1 ; ++i)
    {
        c=getchar_unlocked();
        if(c=='W')
        {
            scanf("%d\n",&inp1);
            printf("%d\n",gcount[nodeTranslator[inp1]]-query(nodeTranslator[inp1]+N+1));

        }
        else
        {
            scanf("%d%d\n",&inp1,&inp2);
            add(1,N+1,2*N+1,nodeTranslator[inp2]+N+1,groupParam[nodeGroup[inp2]].second+N+1);
        }


    }
    return 0;
}