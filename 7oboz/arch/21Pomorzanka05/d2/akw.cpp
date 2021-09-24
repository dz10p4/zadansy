#include <bits/stdc++.h>
using namespace std;

const long long N=1000001,M=10000000000000061;
long long z,m,aaaa;
long long pref[N];
unordered_set<long long>chk,secik;
long long lib[N];

long long fp(long long a, long long wyk)
{
    if(wyk==0)return 1;
    if(!wyk%2){wyk/=2;return (a*a)%M;}
    else return (a*fp(a,wyk-1))%M;
}




int main()
{

    int n,losed,q,a,b,c,cf=1;

    scanf("%d%d",&n,&q);
    for(int i=0 ; i<=n ; ++i)
    {   
        losed=rand()%M;
        while(chk.count(losed))
        {
            losed=rand()%M;
        }
        lib[i]=losed;
        chk.insert(losed);
    }

    for(int i=0 ; i<q ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        pref[a]+=lib[c];
        pref[b+1]-=lib[c];
    }

    for(int i=1 ; i<=n ; ++i)
    {
        pref[i]=(pref[i]+pref[i-1])%M;
    }

    for(int i=1 ; i<=n ; ++i)
    {
        secik.insert(pref[i]);
    }

    printf("%ld",secik.size());
        

    return 0;
}