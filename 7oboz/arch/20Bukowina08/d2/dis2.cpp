#include <bits/stdc++.h>
using namespace std;

int query[1001][1001];
int grid[1001][1001];

int main()
{

        int n=0,m=0,l,inp,es;
        scanf("%d%d",&n,&m);
        for(int i=1; i<n+1; ++i)
        {
                scanf("%d",&l);

                for(int u=0; u<l; ++u)
                {
                        scanf("%d",&inp);

                        ++query[i][inp];




                }


        }



        for(int i=1; i<n+1; ++i)
        {

                for(int u=1; u<m+1; ++u)
                {
                        es=max(query[i][u-1],query[i-1][u]);
                        query[i][u]=max(es,query[i-1][u-1]+query[i][u]);

                }



        }

        // for(int i=0; i<n+1; i-=-1)
        // {
        //         for(int u=0; u<m+1; u-=-1)
        //         {
        //                 printf("%d",query[i][u]);
        //         }
        //         printf("\n");
        // }


        printf("%d",query[n][m]);



        return 0;
}
