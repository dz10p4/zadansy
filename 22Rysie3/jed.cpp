#include <bits/stdc++.h>
using namespace std;

long long dp[1001][1001],MOD=1000000009;

int main()
{
    long long bbb=0,outer=0;
    int n,k;
    scanf("%d%d",&n,&k);
    n/=3;

    for(int i=0 ; i<=n ; ++i)dp[i][0]=1;

    
    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=i ; ++u)
        {
            dp[i][u]=(dp[i-1][u-1]+dp[i-1][u]*(long long)(u+1))%MOD;
        }
    }

    for(int i=0 ; i<=k ; ++i)
    {

        for(int u=0 ; u+i<=k ; ++u)
        {

            bbb=((dp[n][i]*dp[n][u]))%MOD;
            bbb=(bbb*dp[n][k-i-u])%MOD;
            outer=(outer+bbb)%MOD;

        }

    }

    printf("%lld",outer);


    return 0;
}