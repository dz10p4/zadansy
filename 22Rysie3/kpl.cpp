#include <bits/stdc++.h>
using namespace std;

int tab[2001],dp[2001][2001];


int main()
{
    int n,jj=1;

    scanf("%d",&n);

    for(int i=1; i<=n ; ++i)
    {
        scanf("%d",&tab[jj]);

        if(tab[jj]!=tab[jj-1])++jj;

    }


    for(int i=1 ; i<jj ; ++i)
    {

        for(int j=1 ; j<jj-i ; ++j)
        {
            if(tab[j]==tab[j+i])dp[j][j+i]=dp[j+1][j+i-1]+1;
            else dp[j][j+i]=min(dp[j+1][j+i],dp[j][j+i-1])+1;
        }
    }

    printf("%d",dp[1][jj-1]);


    return 0;
}