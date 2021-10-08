#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
#define intm __INT_MAX__
#define intvm __INT64_MAX__
using namespace std;

int main()
{
    int n,m,mxh=0,mih=intm,mxw=0,miw=intm;
    char c;
    scanf("%d%d\n",&n,&m);

    for(int i=0 ; i<n ; ++i)
    {
        for(int u=0 ; u<m ; ++u)
        {
            c=gcu();
            if(c=='*')
            {
                mxh=max(mxh,i+1);
                mih=min(mih,i+1);
                mxw=max(mxw,u+1);
                miw=min(miw,u+1);
            }
        }
        gcu();
    }
    
    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            if(i<=mxh&&i>=mih&&u<=mxw&&u>=miw)printf("*");
            else printf(".");
        }
        printf("\n");
    }

    return 0;
}