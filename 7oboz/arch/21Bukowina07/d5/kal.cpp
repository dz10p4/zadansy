#include <bits/stdc++.h>
using namespace std;

long long dp[2000002], lst[150], mod = 1000000007;
char T[2000001];
int main()
{
    int n;
    //fill(lst,lst+130,0);
    scanf("%d\n", &n);
    scanf("%s", T);
    dp[0] = 1;
    dp[1] = 2;
    lst[T[0]] = 1;
    //lst[T[1]]=2;
    for (int i = 2; i <= n; i++)
    {

        dp[i] = (2 * dp[i - 1] - lst[T[i-1]] + mod) % mod;
        lst[T[i-1]] = dp[i - 1];
    }
    printf("%lld", dp[n]);
    return 0;
}