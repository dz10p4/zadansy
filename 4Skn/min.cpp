#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#define pb push_back
using namespace std;

vector<int>G[100001],GP[100001],NG[100001];
bool in_queue[100001],zj[100001],visited[100001];
set<int>es;
queue<int>q;

int main()
{
    int n,m,a,b,fr,pv=-1,wyn=0;
    scanf("%d%d",&n,&m);
    
    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&a,&b);
        G[a].pb(b);
        GP[b].pb(a);
    }

    q.push(1);
    in_queue[1]=1;

    while(!q.empty())
    {
        fr=q.front();
        q.pop();

        for(int i=0 ; i<GP[fr].size() ; ++i)
        {
            for(int u=0 ; u<G[fr].size() ; ++u)
            {
                G[GP[fr][i]].pb(G[fr][u]);
                GP[G[fr][u]].pb(GP[fr][i]);
            }
        }


        for(int i=0 ; i<G[fr].size() ; ++i)
        {
            if(!in_queue[G[fr][i]]){q.push(G[fr][i]);in_queue[G[fr][i]]=1;}
        }
        pv=fr;
    }

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=0 ; u<G[i].size() ; ++u)
        {
            es.insert(G[i][u]);
        }
        for(int u=0 ; u<GP[i].size() ; ++u)
        {
            es.insert(GP[i][u]);
        }
        if(G[i].size()+GP[i].size()>=n-1)continue;

        for(int u=1 ; u<=n ; ++u)
        {
            if(!es.count(u)&&u!=i){NG[u].pb(i);NG[i].pb(u);}
        }
        es.clear();
    }


    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=0 ; u<NG[i].size() ; ++i)
        {
            if
        }



    }


    //wyn/=n*2;

    printf("%d",wyn);

    return 0;
}