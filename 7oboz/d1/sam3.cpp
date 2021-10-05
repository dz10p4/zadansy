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

bool of[500001];
priority_queue<pair<int,int>>pq;
vector<int>V,M[500001];
int no[500001];

int main()
{
    
    int inp,n,m,p,wyn=0,b=0;
    scanf("%d%d%d",&n,&m,&p);

    for(int i=0 ; i<p ; ++i)
    {
        scanf("%d",&inp);
        
        V.pb(inp);
        M[inp].pb(i);
    }
    for(int i=0 ; wyn<m ; ++i)
    {
        b++;
        if(of[V[i]])continue;
        wyn++;
        pq.push( { M[V[i]][no[V[i]]+1]  ,  V[i] } );
        no[V[i]]++;
        of[V[i]]=1;
    }

    for(int i=b ; i<p ; ++i)
    {
        if(of[V[i]])continue;
        wyn++;
        if(!pq.empty()){of[pq.top().second]=0;
        pq.pop();}
        pq.push( { V[i], M[V[i]][no[V[i]]+1] } );
        no[V[i]]++;
        of[V[i]]=1;
    }
    
    
    

    printf("%d",wyn);

    return 0;
}