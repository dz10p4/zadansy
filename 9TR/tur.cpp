#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int>ok[100001],pk[100001],wyn;

int main()
{
    int n,fn,inp;

    scanf("%d",&n);

    for(int i=1 ; i<=n  ;++i)
    {
        scanf("%d",&fn);

        for(int u=0 ; u<fn ; ++u)
        {
            scanf("%d",&inp);

            pk[i].pb(inp);
            ok[inp].pb(i);
        }


    }





    return 0;
}