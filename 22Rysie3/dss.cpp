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

bool visited[3001];

int main()
{   
    
    vector<pair<pair<int,int>,int>>V;
    queue<int>q;
    int z,y,x,r,n,m,k;
    scanf("%d",&z);


    for(int y=0 ; y<z ; ++y)
    {
        scanf("%d%d%d",&n,&m,&k);
        
        for(int i=0 ; i<k ; ++i)
        {
            scanf("%d%d%d",&y,&x,&r);
            
            if(r>=x)q.push(i);
            V.pb({{x,y},r});
        }

        while(!q.empty())
        {
            int w=q.front();

            for(int i=0 ; i<k ; ++i)
            {
                if(i==w)continue;

                


            }


        }
















    }



    return 0;
}