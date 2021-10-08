#include <bits/stdc++.h>
using namespace std;

vector<pair<string,long long>> v;
vector<long long> b;
vector<long long>::iterator brat;


long long findNum(long long w, long long leng)
{


    //printf("%lld %lld\n",w,leng);

    return 2137;

}



int main()
{
    int n,q,placement;
    long long wyw=0,inp,zl=0,zln;
    string k;
    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        cin>>k>>inp;
        v.push_back({k,inp});
        b.push_back(inp);
        wyw+=inp;
    }

    sort(v.begin(),v.end());
    //sort(b.begin(),b.end());

    zl=v[0].second;
    b[0]=1;
    

    for(int i=1 ; i<v.size() ; ++i)
    {
        zln=v[i].second;
        b[i]=b[i-1]+zl;
        
        zl=zln;
    }

    scanf("%d",&q);

    for(int i=0 ; i<q ; ++i)
    {
        scanf("%d",&inp);
        if(inp>wyw){printf("NIE\n");continue;}
        brat=upper_bound(b.begin(),b.end(),inp);

        placement=brat-b.begin();

        // printf("%s%d\n",v[placement-1].first,1);

        cout<<v[placement-1].first<<findNum(inp-b[placement-1]+1,v[placement-1].second)<<"\n";
    }


    return 0;
}