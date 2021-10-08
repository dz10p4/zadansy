#include <stdio.h>

const long long MODULO=1000000007;
const long long MODET=MODULO-2;
long long factorials[3001];

long long qpow(long long a, long long n)
{
    if (n==0)return 1;
    if (n==1)return a;
    if (n%2)return (a*qpow(a,n-1))%MODULO;
    long long m = qpow(a,n>>1);
    return (m*m)%MODULO;
}

int main()
{   
    factorials[0]=1;
    for(int i=1 ; i<=3000 ; ++i)factorials[i]=(factorials[i-1]*i)%MODULO;

    long long z,c,n,fw=0;
    scanf("%lld%lld%lld",&z,&c,&n);
    fw=factorials[z+c+n];
    fw=(fw*(qpow(factorials[z],MODET)%MODULO))%MODULO;
    //printf("%d\n",fw);
    fw=(fw*(qpow(factorials[c],MODET)%MODULO))%MODULO;
    //printf("%d\n",fw);
    fw=(fw*(qpow(factorials[n],MODET)%MODULO))%MODULO;
    // printf("%d\n",fw);
    printf("%lld",fw%MODULO);
    //printf("%lld",qpow(z,c));
    return 0;
}