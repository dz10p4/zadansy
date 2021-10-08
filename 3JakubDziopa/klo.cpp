#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
using namespace std;

vector<int> v;

pair<int,int> taby[101];

int main()
{
    int inp,n,k,s;
    scanf("%d%d%d",&n,&k,&s);
    for(int i=0 ; i<101 ; ++i)
    {
        taby[i].second=__INT_MAX__;
    }

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);
        v.pb(inp);
        taby[inp]={1,1};
    }

    sort(v.begin(),v.end());    

    for(int q=1 ; q<=k ; ++q)
    {

        for(int i=0 ; i<n ; ++i)
        {
            for(int u=0 ; u<n ; ++u)
            {
                if(i==u||v[i]+v[u]>1000001)continue;

                taby[v[i]+v[u]]={1,min(taby[v[i]+v[u]].second,q+1)};

            }
        }
    }

    for(int i=s ; i>0 ; --i)
    {
        if(taby[i].second<=k){printf("%d",i);break;}
    }


    return 0;
}