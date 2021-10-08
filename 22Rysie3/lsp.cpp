#include <bits/stdc++.h>
using namespace std;

int grid[150][150],vertx[150][150],horx[150][150],htab[150],wynikowa,x3,y3;

int main()
{

    //for(int i=0 ; i<150 ; ++i){grid[i][0]=0;grid[0][i]=-1;}

    int l,h,n,x1,y2,y1,x2;
    scanf("%d%d%d",&l,&h,&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        x1++;x2+=x1-1;y1++;y2+=y1-1;

        for(int k=x1 ; k<=x2 ; ++k)
        {
            for(int j=y1 ; j<=y2 ; ++j)
            {
                grid[j][k]=-1;
            }
        }

    }
    
    scanf("%d%d",&x3,&y3);

    for(int ii=1 ; ii<=h ; ++ii)
    {
        for(int iii=l ; iii>=0 ; --iii)
        {
            if(grid[ii][iii]!=-1)horx[ii][iii]+=horx[ii][iii+1]+1;
        }
        // for(int iii=l ; iii>=0 ; --iii)
        // {
        //     if(grid[ii][iii]!=-1)htab[iii]+=htab[iii+1]+1;
        // }
        // for(int iii=1 ; iii<=l ; ++iii)
        // {
        //     horx[ii][iii]=min(horx[ii][iii],htab[iii]);
        // }
    }
    for(int ii=1 ; ii<=l ; ++ii)
    {
        for(int iii=h ; iii>=0 ; --iii)
        {
            if(grid[iii][ii]!=-1)vertx[iii][ii]+=vertx[iii+1][ii]+1;
        }
        // for(int iii=h ; iii>=0 ; --iii)
        // {
        //     if(grid[iii][ii]!=-1)vertx[iii][ii]+=vertx[ii+1][iii]+1;
        // }
    }

    // for(int i=1 ; i<=h ; i++)
    // {
    //     for(int u=1 ; u<=l ; ++u)
    //     {
    //         printf("%d ",vertx[i][u]);
    //     }
    //     printf("\n");

    // }
    // printf("\n");
    // for(int i=1 ; i<=h ; i++)
    // {
    //     for(int u=1 ; u<=l ; ++u)
    //     {
    //         printf("%d ",horx[i][u]);
    //     }
    //     printf("\n");

    // }

    for(int i=1 ; i<=h ; i++)
    {
        for(int u=1 ; u<=l ; ++u)
        {
            if(horx[i][u]>=x3&&vertx[i][u]>=y3&&grid[i+y3][u+x3]!=-1)
            {
                wynikowa++;
                //printf("%d %d\n",i,u);
            }
        }        
    }

    printf("%d",wynikowa);


    return 0;
}