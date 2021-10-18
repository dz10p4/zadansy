#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <limits.h>
#define pb push_back
using namespace std;

int dp[2][100001],grid[2][100001];

int main()
{
    int n;
    fill(dp[0],dp[0]+100001,INT_MAX);
    fill(dp[1],dp[1]+100001,INT_MAX);

    scanf("%d",&n);
    dp[0][0]=0;dp[1][0]=0;
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&grid[0][i+1]);
    }
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&grid[1][i+1]);
    }

    for(int i=1 ; i<=n ; ++i)
    {
        if(!grid[0][i])dp[0][i]=1;
        dp[0][i]+=min(dp[0][i-1],dp[1][i]);
        if(!grid[1][i])dp[1][i]=1;
        dp[1][i]+=min(dp[0][i],dp[1][i-1]);
    }

    for(int i=0 ; i<=n ; ++i)
    {
        printf("%d ",dp[0][i]);
    }
    printf("\n");
    for(int i=0 ; i<=n ; ++i)
    {
        printf("%d ",dp[1][i]);
    }

    //printf("%d",min(dp[0][n],dp[1][n]));


    return 0;
}