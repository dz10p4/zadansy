#include <bits/stdc++.h>
using namespace std;

map<long long,long long> bruh; // punkt na wierzchołek, do pizdy ta mapa bo się w ramie rozpierdala
vector<long long> divids;
long long n,r,pop,now,then,pawel=1;
bool upping=1;

int main()
{
    bruh[0]=0;
    for(long long i=1 ; i<1000000000000000000 ; ++i)
    {
        n=i;

        while(n!=0)
        {
            r=n%10;
            n=n/10;
            divids.push_back(r);
            if(r==0){divids.clear();upping=1;break;}
        }
        if(divids.empty()){now=then;continue;}
        n=i;
        for(int u=0 ; u<divids.size() ;++u)
        {   
            if(n%divids[u]!=0){upping=0;break;}
        }
        if(upping){now=then+1;}
        else now=then;
        printf("%lld",now);
        upping=1;
        divids.clear();
    }


    //for(int i=1 ; i<1000000000000000000 ; ++i){printf("%lld,",now);}

    return 0;
}