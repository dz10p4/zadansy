//#include <bits/stdc++.h>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int equo=0;
int tempout;
//int grid[60000,60000];
vector<int>outies;
map<pair<int,int>,int>grid;
int main()
{
    int s,w,n,x,y,mwx=-__INT_MAX__,nwx=__INT_MAX__,mwy=-__INT_MAX__,nwy=__INT_MAX__;

    scanf("%d%d%d",&s,&w,&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&x,&y);

        mwx=max(mwx,x); nwx=min(nwx,x); mwy=max(mwy,y); nwy=min(nwy,y);

        if(!x%s&&!y%w)
        {
            grid[{x-1,y-1}]++;
            grid[{x-1,y+1}]++;
            grid[{x+1,y-1}]++;
            grid[{x+1,y+1}]++;
        }
        else if (!x%s)
        {
            grid[{x,y-1}]++;
            grid[{x,y+1}]++;
        }
        else if (!y%w)
        {
            grid[{x-1,y}]++;
            grid[{x+1,y}]++;
        }
        else grid[{x,y}]++;
    }
    // for(int i=nwx-nwx%s ; i<=mwx+mwx%s ; ++i)
    // {
    //     for(int u=mwy+equo+mwy%w ; u>=nwy-nwy%w ; --u)
    //     {
    //         tempout+=grid[{i,u}];
    //         if(u%w==w-1){u+=w;i+=1;}
    //         if(i%s==s-1)
    //         {
    //             if(tempout)outies.push_back(tempout);tempout=0;
    //         }
    //         if(i==mwx+mwx%s&&mwy+equo+mwy%w!=nwy-nwy%w)
    //         {
    //             i=0;u-=w;
    //         }
    //         if(i==nwx-nwx%s&&u==nwy-nwy%w)break;
    //     }
        
    // if(i==nwx-nwx%s);

    // }

    for(int i=-30000%s-30000 ; i<30000+30000%s ; ++i)
    {
        for(int u=-30000%w ; u<30000+30000%w ; ++u)
        {
            for(int ii=i ; ii<i+s ; ++ii)
            {
                for(int uu=u ; uu<u+w ; ++uu)
                {
                    tempout+=grid[{ii,uu}];
                }
            }
            if(tempout)outies.push_back(tempout);
            u+=w;
        }
        i+=s;
    }

    for(auto I:outies){printf("%d ",I);}

    return 0;
}