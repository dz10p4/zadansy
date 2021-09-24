#include <bits/stdc++.h>
using namespace std;
const int N=262144;
vector<int>G[250001];
bool visited[250001];
int depths[250001],nodeTranslated[250001],timx,pp=1,tree[N*2];
pair<int,int>nodeDetails[250001];
void defes(int w,int dpt)
{
    visited[w]=1;
    timx++;
    nodeTranslated[w]=pp;
    depths[nodeTranslated[w]]=dpt;
    pp++;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])
        {
            nodeDetails[G[w][i]].first=timx+1;
            defes(G[w][i],dpt+1);
            nodeDetails[G[w][i]].second=timx;
            
        }   
    }
}

void add(int w,int p,int k,int x,int y,int v)
{
    if(p>y || k<x)return;
    if(p>=x&&y>=k)
    {
        tree[w]+=v;
        return;
    }
    add(w*2,p,(p+k)/2,x,y,v);
    add(w*2+1,(p+k)/2+1,k,x,y,v);
}
int es;
int query(int w)
{
    if(w==1) return tree[w];
    return tree[w]+query(w>>1);
}


int main()
{

    int n,inp1,inp2,m;
    char c;
    scanf("%d",&n);
    
    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].push_back(inp2);
        //G[inp2].push_back(inp1);
    }

    defes(1,0);

    for(int i=2 ; i<=n ; ++i)
    {
        add(1,0,N-1,nodeDetails[i].first,nodeDetails[i].second,1);
    }
    nodeDetails[1].first=1;nodeDetails[1].second=n;
    scanf("%d",&m);
    getchar_unlocked();
    for(int i=0 ; i<n+m-1 ; ++i)
    {
        scanf("%c",&c);
        getchar_unlocked();
        if(c=='W')
        {
            es=0;
            scanf("%d\n",&inp1);
            //getchar_unlocked();
            printf("%d\n",query(nodeTranslated[inp1]+N));
        }
        else
        {
            scanf("%d%d\n",&inp1,&inp2);
            
            add(1,0,N-1,nodeDetails[nodeTranslated[inp2]].first,nodeDetails[nodeTranslated[inp2]].second,-1);
            
        }


    }

    return 0;
}