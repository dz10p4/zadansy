#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;
    int n,up;
    cin>>n>>k;

    for(int i=1 ; i<=n ; ++i)
    {
        up=i;
        while(up<n)
        {
            if(k[up]!=k[up-i])
            {
                break;
            }
            if(up+i>=n)
            {
                cout<<i;
                return 0;
            }
            up+=i;
        }
    }
    return 0;
}