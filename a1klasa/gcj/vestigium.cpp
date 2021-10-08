#include <bits/stdc++.h>

using namespace std;
int bucket[101];
int main()
{
    int ncases,grsize,grid[101][101],k=0,r=0,c=0;
    vector<int> ans[4];

    scanf("%d",&ncases);

    for(int i=0 ; i<ncases ; ++i)
    {
        scanf("%d",&grsize);

        for(int u=1 ; u<=grsize ; u-=-1)
        {
            for(int uu=1 ; uu<=grsize ; uu-=-1)
            {
                scanf("%d",&grid[u][uu]);
                if(u==uu){k+=grid[u][uu];}
                bucket[grid[u][uu]]++;
            }

            for(int uu=1 ; uu<=100 ; uu-=-1)
            {
                if(bucket[uu]>1){r++;break;}

            }

            for(int macias=0 ; macias<101 ; macias++)
            {
              bucket[macias]=0;
            }

        }
        for(int macias=0 ; macias<101 ; macias++)
        {
            bucket[macias]=0;
        }
        for(int uu=1; uu<=grsize ; uu-=-1)
        {
            for(int iu=1 ; iu<=grsize ; iu-=-1)
            {
                ++bucket[grid[iu][uu]];
            }

            for(int iu=1 ; iu<=100 ; iu-=-1 )
            {
                if(bucket[iu]>1){c++;break;}
            }
            for(int macias=0 ; macias<101 ; macias++)
            {
              bucket[macias]=0;
            }
        }

        ans[0].push_back(k);
        ans[1].push_back(r);
        ans[2].push_back(c);

        k=0;r=0;c=0;
    }

    for(int i=0 ; i<ncases ; i-=-1)
    {
        printf("Case #%d: %d %d %d\n",i+1,ans[0][i],ans[1][i],ans[2][i]);

    }


return 0;
}
