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
#include <bitset>
#define pb push_back
using namespace std;

bitset<300010>visited;
vector<pair<pair<int,int>,int>>V;
void dfs(int w)
{
    visited[w]=1;

    for(int i=0 ; i<V.size() ; ++i)
    {
        if(i==w)continue;

        long long x1=V[w].first.first,x2=V[i].first.first,y1=V[w].first.second,y2=V[i].first.second,r1=V[w].second,r2=V[i].second;
        if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<(r1+r2)*(r1+r2)&&!visited[i])
        {
            dfs(i);
        }

    }
}


int main()
{   
    queue<int>q,tq;
    int z,y,x,r,n,m,k,pp=0;
    scanf("%d",&z);

    for(int yy=0 ; yy<z ; ++yy)
    {
        scanf("%d%d%d",&m,&n,&k);
        
        for(int i=0 ; i<k ; ++i)
        {
            scanf("%d%d%d",&y,&x,&r);
            
            if(r>=x||y+r>=m)q.push(i);
            if(r>=y||r+x>=n)tq.push(i);
            V.pb({{x,y},r});
        }

        while(!q.empty())
        {
            int w=q.front();
            if(!visited[w])dfs(w);
            q.pop();
        }


        while(!tq.empty())
        {
            if(visited[tq.front()]&&!pp){pp=1;printf("NIE\n");}
            tq.pop();
        }

        if(!pp)printf("TAK\n");
        pp=0;
        visited=0;
        V.clear();
    }

    return 0;
}