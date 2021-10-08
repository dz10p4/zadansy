#include <stdio.h>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;

set<int> macias[501];
vector<int> ruta[501];
int dachu[1001];
int grazyna[1001];
bool lyda[1001];
int main()
{

        int n,k[501],inp=0,slaw=0,mx=0,tabmx=0;
        scanf("%d",&n);
        for(int i=0; i<n; ++i)
        {
                scanf("%d",&k[i]);

                for(int u=0; u<k[i]; ++u)
                {
                        scanf("%d",&inp);
                        if(!macias[i].count(inp)) {macias[i].insert(inp); ruta[i].push_back(inp);}

                }

                sort(ruta[i].begin(),ruta[i].end());

        }

        // for(int i=0; i<n; ++i)
        // {
        //         for(int u=0; u<ruta[i].size(); ++u)
        //         {
        //                 printf("%d ", ruta[i][u]);
        //
        //         }
        //
        //         printf("\n");
        // }


        /*    for(int i=0; i<n; ++i)
            {

                    for(int u=0; u<1001; ++u)
                    {
                            dachu[u]=grazyna[u];
                            //grazyna[i]=0;
                    }
                    for(int u=0; u<ruta[i].size(); ++u)
                    {



                            // for(int ii=0; ii<15; ++ii )
                            // {
                            //         printf("%d ",ii);
                            // }
                            // printf("\n");
                            // for(int ii=0; ii<15; ii++)
                            // {
                            //         printf("%d ",grazyna[ii]);
                            // }
                            // printf("\n");



                            grazyna[ruta[i][u]]+=ruta[i][u];
                            //printf("%d %d\n\n",tabmx,ruta[i][u]);


                            //grazyna[ruta[i][u]]+=tabmx;
                            //tabmx=0;
                            for(int ii=ruta[i][u]; ii; --ii)
                            {
                                    tabmx=max(tabmx,dachu[ii]);
                            }

                            tabm=0;

                            // for(int ii=0; ii<12; ++ii )
                            // {
                            //         printf("%d ",ii);
                            // }
                            // printf("\n");
                            // for(int ii=0; ii<12; ii++)
                            // {
                            //         printf("%d ",grazyna[ii]);
                            // }
                            // printf("\n");
                            //  printf("%d\n\n",tabmx);
                    }





            }




            for(int u=0; u<1001; ++u)
            {
                    dachu[u]=grazyna[u];
                    //grazyna[i]=0;
            }

            for(int i=0; i<1001; ++i )
            {
                    mx=max(mx,dachu[i]);

            }*/



        for(int i=n; i>=0; --i )
        {

                for(int u=0; u<1001; ++u)
                {

                        grazyna[u]=dachu[u];


                }

                for(int u=0; u<ruta[i].size(); ++u)
                {

                        for(int ii=ruta[i][u]; ii; --ii)
                        {
                                if(grazyna[ruta[i][u]]+ruta[i][u]>dachu[ii]) dachu[ii]=ruta[i][u]+grazyna[ruta[i][u]];

                        }


                }




        }




        // for(int i=0; i<n; ++i)
        // {
        //         printf("%d ",dachu[i]);
        //
        // }


        printf("%d",dachu[1]);




        return 0;
}
