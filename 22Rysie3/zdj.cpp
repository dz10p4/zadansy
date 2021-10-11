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

vector<pair<int,int>>mem[400001];

int main()
{
    int n,l,d,p,g;

    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&l,&d,&p,&g);
        l+=200001;d+=200001;p+=200001;g+=200001;

        mem[l].pb({g,1});
        mem[l].pb({d+1,-1});
        mem[p].pb({g,-1});
        mem[p].pb({d+1,1});

    }



    return 0;
}