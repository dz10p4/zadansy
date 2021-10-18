#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <limits.h>
#define pb push_back
using namespace std;

priority_queue<pair<int,int>>pq;
bool in_queue[10001];
vector<pair<int,int>>G[10001],S;
int costs[10001];


int main()
{
    int n,m,x,y,a,b,c,msc,odl,timer=1;
    fill(costs,costs+10001,INT_MAX);

    scanf("%d%d%d%d",&x,&y,&n,&m);
    

    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        
        G[a].pb({b,c});
        G[b].pb({a,c});
    }
    S.pb({0,0});
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&a,&b);
        S.pb({a,b});
    }

    pq.push({0,x});
    in_queue[x]=1;
    int cooldown;
    while(!pq.empty())
    {
        msc=pq.top().second;
        odl=pq.top().first;
        pq.pop();



        for(int i=0 ; i<G[msc].size() ; ++i)
        {
            if(!in_queue[G[msc][i].first])
            {
                pq.push(G[msc][i]);in_queue[G[msc][i].first]=1;
            }


        }


    }

    





    return 0;
}