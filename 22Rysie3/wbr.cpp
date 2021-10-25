#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
using namespace std;

int T[102][2],JB[102][2];

int main()
{
    int n,a=0,wyn=0;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&T[i][0]);
    }
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&T[i][1]);
    }

    for(int i=n-1 ; i>=0 ; --i)
    {
        if(T[i][0]==0)JB[i][0]=JB[i+1][0]+1;
    }
    for(int i=n-1 ; i>=0 ; --i)
    {
        if(T[i][1]==0)JB[i][1]=JB[i+1][1]+1;
    }

    for(int i=0 ; i<n ; ++i)
    {
        if(T[i][a]==0&&T[i][!a]==0)
        {
            if(JB[i][a]>JB[i][!a]){a=!a;wyn+=2;}
            else wyn++;
        }
        else if(T[i][a]==0){a=!a;++wyn;}
    }

    printf("%d",wyn);

    return 0;
}