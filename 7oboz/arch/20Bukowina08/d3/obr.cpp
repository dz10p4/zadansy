#include <bits/stdc++.h>

using namespace std;
int main()
{

        int n,x1,y1,x2,y2;

        pair<int,int> rutax[1001];
        pair<int,int> rutay[1001];

        scanf("%d",&n);

        for(int i=0; i<n; ++i)
        {

                scanf("%d%d%d%d",&x1,&y1,%x2,&y2);

                rutax[i].first=x1+10000;
                rutax[i].second=x2+10000;

                rutay[i].first=y1+10000;
                rutay[i].second=y2+10000;

        }





        return 0;
}
