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

int main()
{
    int minyy=100000000,minxx=100000000,maxxx=0,maxyy=0,previ=0,previv=0;
    int n,x1,x2,y1,y2,vv=0,wyn=0,bok=0,segs=0;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        x1+=10002;
        x2+=10002;
        y1+=10002;
        y2+=10002;

        maxyy=max(max(maxyy,y1),y2);
        maxxx=max(max(maxxx,x1),x2);
        minxx=min(min(minxx,x1),x2);
        minyy=min(min(minyy,y1),y2);

        grid[x1].push({-y1,1});
        grid[x1].push({-y2,-1});
        grid[x2].push({-y1,1});
        grid[x2].push({-y2,-1});
    }

    for(int i=minxx ; i<=maxxx ; ++i)
    {
        while(!grid[i].empty())
        {
            if(previ!=grid[i].top().second&&previ==-1)segs++;
            if(previ==1&&grid[i].top().second==-1)bok+=abs(previv-grid[i].top().first);
            previv=-grid[i].top().first;
            previ=grid[i].top().second;
            grid[i].pop();
        }

        wyn+=(bok+segs)*2;
        bok=0;
        
        previ=0;
        previv=0;
        //cout<<"macias";
    }

    printf("%d",wyn);

    return 0;
}