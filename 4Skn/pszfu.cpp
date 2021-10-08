#include <bits/stdc++.h>
using namespace std;

bool tab[2001][2001];


int main()
{
    int x1,x2,y1,y2,n,m;
    scanf("%d%d%d%d%d%d",&n,&m,&x1,&y1,&x2,&y2);
    getchar_unlocked();

    ws=(x1-1)*m+y1;
    wk=(x2-1)*m+y2;

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            c=getchar_unlocked();
            if(c=='#')tab[(i-1)*m+u]=0;
            else tab[(i-1)*m+u]=1;

        }
        getchar_unlocked();
    }

    






    return 0;
}