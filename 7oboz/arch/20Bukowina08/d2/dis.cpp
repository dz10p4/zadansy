#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n,inp,m,l,cter=0;
        priority_queue<int> connections[1001];
        priority_queue<int> wells;
        scanf("%d%d",&n,&m);

        for(int i=1; i<m; ++i)
        {
                wells.push(i);
        }

        for(int i=0; i<n; ++i)
        {
                scanf("%d",&l);

                for(int u=0; u<l; ++u)
                {
                        scanf("%d",&inp);
                        connections[i+1].push(inp);

                }

        }
        cter=n;
        for(int i=1; i<n; ++i)
        {
                if(!connections[i].empty()&&!connections[i+1].empty()&&connections[i].top()>=connections[i+1].top()) --cter;


        }

        printf("%d",cter);

        return 0;
}
