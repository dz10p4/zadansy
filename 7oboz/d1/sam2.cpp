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

priority_queue<pair<int,int>>pq;
vector<int>V[200003],P;
int ind[200003];
bool ins[200003];

int main()
{
    int n,p,k,inp;
    long long wyn=0;
    
    scanf("%d%d%d",&n,&k,&p);
    P.pb(0);
    for(int i=0 ; i<p ; ++i)
    {
        scanf("%d",&inp);
        V[inp].pb(i+1);
        P.pb(inp);
    }
    for(int i=1 ; i<n ; ++i)
    {
        V[i].pb(500001);
    }

    for(int i=1 ; i<=p ; ++i)
    {
        if(ins[P[i]])continue;
        if(k>0)
        {
            ins[P[i]]=1;
            pq.push({V[P[i]][ind[P[i]]],P[i]});
            ind[P[i]]++;
            wyn++;
            k--;
        }
        else
        {
            ins[pq.top().second]=0;
            pq.pop();
            ins[P[i]]=1;
            pq.push({V[P[i]][ind[P[i]]],P[i]});
            ind[P[i]]++;
            wyn++;
        }
    }

    printf("%lld",wyn);


    return 0;
}