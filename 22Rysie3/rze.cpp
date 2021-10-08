#include <bits/stdc++.h>
using namespace std;

vector<pair<int,bool>>V;
long long x=0;
int depth=0,begg=0;
int main()
{
    int n,m,inp1,inp2;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        if(inp1>inp2)
        {
            V.push_back({inp1,1});
            V.push_back({inp2,0});
        }
    }

    sort(V.begin(),V.end());

    //for (auto I:V)printf("%d ",I);
    
    for(int i=0 ; i<V.size() ; ++i)
    {
        if(!V[i].second)
        {
            ++depth;
            if(depth==1)begg=i;
        }
        else
        {
            --depth;
            if(!depth)x+=2*(V[i].first-V[begg].first);
        }


    }
    
    printf("%lld",x+m);


    return 0;
}