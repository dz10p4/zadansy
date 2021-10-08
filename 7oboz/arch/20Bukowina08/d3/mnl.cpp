#include <bits/stdc++.h>
using namespace std;

long long int spottt(long long int a,long long int p,long long int mod)
{
        a%=mod;
        if(!p) {return 1;}
        if(p%2) {return a*pow((spottt(a,(p-1)/2,mod)),2);}
        return pow(spottt(a,p/2,mod),2);
}



int main()
{

        long long n,m,jed,wyn;

        scanf("%lld%lld",&n,&m);

        jed=spottt(2,n,m);

        wyn=spottt(2,jed,m);

        wyn%=m;

        printf("%lld",wyn);

        return 0;
}
