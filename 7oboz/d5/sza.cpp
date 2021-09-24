#include <bits/stdc++.h>
using namespace std;

int grid[101][101], dp[101][101];




int main()
{
    int n;
    scanf("%d", &n);
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int u = 0; u < n; ++u)
        {
            scanf("%d", &grid[i][u]);
            if(dp[i][u])
            {
                if (grid[i][u] + u + 1 <= n)
                {
                    dp[i][u + grid[i][u]] += dp[i][u];
                }
                if (grid[i][u] + i + 1 <= n)
                {
                    dp[i+grid[i][u]][u]+=dp[i][u];
                }
            }
        }
    }

    //for(int i=0 ; i<n ; ++i){for(int u=0 ; u<n ; ++u)printf("%d ",dp[i][u]);printf("\n");}

    printf("%d",dp[n-1][n-1]);

    return 0;
}