#include <bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
long long t[500001],dp[500001],lst[500001];

int main()
{
    long long n;
    
    scanf("%lld",&n);
    dp[1]=1;
    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%lld",&t[i]);
        if(i==1){lst[t[i]]=1;continue;}
        dp[i]=(2*dp[i-1]-lst[t[i]]+1+MOD)%MOD;
        lst[t[i]]=(dp[i-1]+1+MOD)%MOD;
    }
        


    
    printf("%lld",dp[n]);



    return 0;
}