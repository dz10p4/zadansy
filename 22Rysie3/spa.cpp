#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001],tab[2001][2001];

int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            scanf("%d",&tab[i][u]);
        }
    }

    for(int i=n ; i>=0 ; --i)
    {
        for(int u=m ; u>=0 ; --u)
        {   
            if(i==n&&(i+u)%2)dp[i][u]=dp[i][u+1]+tab[i][u];
            else if(i==n&&!(i+u)%2)dp[i][u]=dp[i][u+1]+tab[i][u];
            else if(u==m&&(i+u)%2)dp[i][u]=dp[i+1][u]+tab[i][u];
            else if(u==m&&!(i+u)%2)dp[i][u]=dp[i+1][u]+tab[i][u];
            else if((i+u)%2)dp[i][u]=min(dp[i+1][u],dp[i][u+1])+tab[i][u];
            else dp[i][u]=max(dp[i+1][u],dp[i][u+1])+tab[i][u];
        }
    }

    printf("%d",dp[1][1]);


    return 0;
}