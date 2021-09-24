#include <bits/stdc++.h>
using namespace std;

int T1[500001],T2[500001];
int TT1[300001],TT2[300001];
bool visited[500001];
vector<pair<int,int>>G[500001];
int gcolor[500001];
queue<pair<int,int>>q;
int b, c;
void defes(int w,int ctrl)
{
    visited[w]=1;
    gcolor[w]=ctrl;
    if(ctrl)b++;
    else c++;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i].first])defes(G[w][i].first,(ctrl+G[w][i].second)%2);
    }

}



int main()
{
    int n,bgg=0,ans=0;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&T1[i]);
        bgg=max(bgg,T1[i]);

        if(TT1[T1[i]]>0)
        {
            G[i].push_back({TT1[T1[i]],1});
            G[TT1[T1[i]]].push_back({i,1});
        }
        else TT1[T1[i]]=i;       
    }

    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&T2[i]);
        bgg=max(bgg,T2[i]);

        if(TT2[T2[i]]>0)
        {
            G[i].push_back({TT2[T2[i]],1});
            G[TT2[T2[i]]].push_back({i,1});
        }
        else TT2[T2[i]]=i;
        if(TT1[T2[i]]>0)
        {
            G[TT1[T2[i]]].push_back({i,0});
            G[i].push_back({TT1[T2[i]],0});
        }  
    }

    for(int i=1 ; i<=bgg ; ++i)
    {
        if(!visited[i]){
            b = 0;c=0;
            defes(i,0);
            ans+=min(b,c);
        }
    }
    

    cout<<ans;
    return 0;
}