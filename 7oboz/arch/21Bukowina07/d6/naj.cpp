#include <bits/stdc++.h>
using namespace std;

vector<int>G[2001];
bool rchbl[2001],visited[2001];

int fthi,fthv,jajcotab[2001];

void deff(int w,int dph)
{
    visited[w]=1;
    if(dph>fthv&&G[w].size()-jajcotab[w]==1){fthi=w;fthv=dph;}

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(rchbl[G[w][i]]&&!visited[G[w][i]])deff(G[w][i],dph+1);
    }

}

void dcff(int w,int dph)
{
    visited[w]=1;
    if(dph<fthv&&G[w].size()-jajcotab[w]==1){fthi=w;fthv=dph;}

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(rchbl[G[w][i]]&&!visited[G[w][i]])deff(G[w][i],dph+1);
    }
}


int main()
{
    int n,inp1,k,inp2,bst=INT_MAX,res=0,bstv=0,bstvv=0;
    scanf("%d%d",&n,&k);
    
    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        rchbl[inp1]=1;
        rchbl[inp2]=1;
        G[inp1].push_back(inp2);
        G[inp2].push_back(inp1);
    }

    for(int i=0 ; i<n-1 ; ++i)if(G[i].size()-jajcotab[i]>bstvv){bstv=i;bstvv=G[i].size();}

    while(bst>k)
    {
        fthv=0;fthi=0;
        dcff(bstv,0);
        fthv=0;
        //cout<<fthi<<endl;
        fill(visited,visited+2000,0);
        deff(fthi,0);
        fill(visited,visited+2000,0);
        //cout<<fthv<<" "<<fthi<<endl;
        bst=fthv;
        //cout<<bst<<endl;
        if(bst>k)
        {
            for(auto I:G[fthi])jajcotab[I]++;
            rchbl[fthi]=0;
            res++;
        }

    }

    

    printf("%d",res);

    return 0;
}