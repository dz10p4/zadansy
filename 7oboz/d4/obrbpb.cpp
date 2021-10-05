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

priority_queue<pair<int,int>>grid[20001];
int wtd[20001],act[20001];
int miny=100000000,minx=100000000,maxx=0,maxy=0;
int main()
{
    int n,x1,x2,y1,y2,vv=0,wyn=0,bok=0,segs=0;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        x1+=10002;
        x2+=10002;
        y1+=10002;
        y2+=10002;

        maxy=max(maxy,y1,y2);
        maxx=max(maxx,x1,x2);
        minx=min(minx,x1,x2);
        miny=min(miny,y1,y2);

        grid[x1].push({-y1,1});
        grid[x1].push({-y2,-1});
        grid[x2].push({-y1+1,-1});
        grid[x2].push({-y2-1,1});
    }

    for(int i=minx-1 ; i<=maxx ; ++i)
    {
        for(int u=0 ; !grid[i].empty() ; ++u)
        {
            if(grid[i].top().second==1)wtd[-grid[i].top().first]+=grid[i].top().second;
            else wtd[-grid[i].top().first+1]+=grid[i].top().second;
            grid[i].pop();
        }
        for(int u=minx-1 ; u<=maxx ; ++u)
        {
            if(act[u-1]+wtd[u]==1&&act[u]==0)bok++;
            act[u]=act[u-1]+wtd[u];
            if(act[u]==1&&act[u]+wtd[u+1]==0)segs++;
        }
        wyn+=(bok+segs)*2;
        bok=0;
        segs=0;
        //cout<<"macias";
    }

    printf("%d",wyn);

    return 0;
}