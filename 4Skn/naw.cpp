#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
using namespace std;

int grid[4002][4002],k,nd=0,n;

void gointo(int x,int y)
{
    if(x==1&&y==n+1)nd=1;
    
    if(grid[x][y+1]>=k&&y<=n)
    {
        printf("(");
        gointo(x,y+1);
        
    }
    else
    {
        k--;
        printf(")");
        gointo(x-1,y);
        
    }

    if(nd)return;

}


int main()
{
    
    scanf("%d%d",&n,&k);

    grid[1][n]=1;

    for(int i=n ; i>=0 ; --i)
    {
        //cout<<"macias";
        for(int u=n-i+1; u<=n+1 ;++u)
        {
            grid[u][i]+=grid[u-1][i]+grid[u][i+1];
        }
    }

    // for(int i=0 ; i<=n+1 ; ++i)
    // {
    //     for(int u=0 ; u<=n+1 ; ++u)
    //     {
    //         printf("%d ",grid[i][u]);
    //     }
    //     printf("\n");
    // }
    printf("(");
    gointo(n+1,0);




    return 0;
}