#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#define pb push_back
#define mod 1000000007
using namespace std;

int dp[1003][1003], grid[1003][1003], d[1003][1003], l[1003][1003], n, m, wyn, cter;

int main()
{
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; ++i)
    {
        for (int u = 1; u <= m; ++u)
        {
            scanf("%d", &dp[i][u]);
        }
    }
    //l[n][m] = 1;
    //d[n][m] = 1;
    grid[n][m] = 1;
    for (int i = n; i >= 0; i--)
    {
        for (int u = m; u >= 0; u--)
        {
            if (i == n && u == m)u--;

            grid[i][u]+=grid[i][u+1]+l[i][u+2]-l[i][u+1+dp[i][u]];
            l[i][u+1]+=grid[i][u+1];
            grid[i][u]+=grid[i+1][u]+d[i+2][u]-d[i+1+dp[i][u]][u];
            d[i+1][u]+=grid[i+1][u];           
        }
    }

    printf("\n");
    for (int i = 1; i <= n; ++i)
    {
        for (int u = 1; u <= m; ++u)
        {
            printf("%d ", grid[i][u]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; ++i)
    {
        for (int u = 1; u <= m; ++u)
        {
            printf("%d ", d[i][u]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; ++i)
    {
        for (int u = 1; u <= m; ++u)
        {
            printf("%d ", l[i][u]);
        }
        printf("\n");
    }

    printf("%d", grid[1][1]);

    return 0;
}