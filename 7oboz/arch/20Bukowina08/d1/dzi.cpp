#include <bits/stdc++.h>
using namespace std;
int kw[2001];
int n,mx;

int main()
{
        int inp,es;
        stack<pair<int,int> > macias;
        scanf("%d",&n);

        for(int i=0; i<n; ++i)
        {
                for(int u=0; u<n; ++u)
                {
                        scanf("%d",&inp);
                        if(inp) {kw[u]=0;}
                        else kw[u]++;




                }

        }


        printf("%d", mx);
        return 0;
}
