#include <bits/stdc++.h>
using namespace std;
long long ggg, lngn = 1;
vector<int> dp[151][151];

// void sum(int x1, int y1, int x2, int y2)
// {
//     for (int i = 0; i < dp[x1][y1].size(); ++i)
//     {
//         if (dp[x2][y2].size() == i)
//         {
//             dp[x2][y2].push_back(dp[x1][y1][i] % 10);
//             dp[x2][y2].push_back(dp[x1][y1][i] / 10);
//         }
//         else
//         {
//             dp[x2][y2][i] += dp[x1][y1][i] % 10;
//             if (dp[x2][y2].size() < i + 1)
//                 dp[x2][y2].push_back(dp[x1][y1][i] / 10);
//             else
//                 dp[x2][y2][i] += dp[x1][y1][i] / 10;
//         }
//     }
// }

int main()
{
    int n, x;
    bool on = 0;
    scanf("%d", &n);
    dp[1][1].push_back(1);
    for (int i = 1; i <= n; ++i)
    {
        for (int u = 1; u <= n; ++u)
        {
            scanf("%d", &x);
            if (i == n && u == n)
                break;

            // sum(i, u, i + x, u);
            // sum(i, u, i, u + x);
            for(int j=0 ; j<dp[i][u].size() ; ++j)
            {
                if(dp[i+x][u].size()>j)
                dp[i+x][u][j]=(dp[i][u][j]+dp[i+x][u][j])%10;
                else 
                dp[i+x][u].push_back(dp[i][u][j]);

                if(dp[i+x][u].size()>j+2)
                dp[i+x][u][j+1]=(dp[i][u][j]+dp[i+x][u][j])/10;
                else 
                dp[i+x][u].push_back(dp[i][u][j+1]);

                if(dp[i][u+x].size()>j)
                dp[i][u+x][j]=(dp[i][u][j]+dp[i][u+x][j])%10;
                else 
                dp[i][u+x].push_back(dp[i][u][j]);

                if(dp[i][u+x].size()>j+2)
                dp[i][u+x][j+1]=(dp[i][u][j]+dp[i][u+x][j])/10;
                else 
                dp[i][u+x].push_back(dp[i][u][j+1]);
                
            }

        }
    }

    // for(int i=1 ; i<=n ; ++i)
    // {
    //     for(int u=1 ; u<=n ; ++u)
    //     {
    //         printf("%d ",dp[i][u]);
    //     }
    //     cout<<endl;
    // }

    //if(!dp[n][n][])printf("0");
    for(int i=111 ; i>0 ; --i){lngn=i;if(dp[n][n][i]){break;}}
    for (int i = 0; i < lngn; ++i)
    {
        if (dp[n][n][i])
            on = 1;
        if (on)
            printf("%d", dp[n][n][i]);
    }

    return 0;
}