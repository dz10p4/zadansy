#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>>pq;

bool visited[1000001];

int tab[1000001],n,best=__INT_MAX__;


void qclear( priority_queue<int> &q )
{
   priority_queue<int> empty;
   swap( q, empty );
}


void befes(int w)
{
    
    if(w)



}




int main()
{

    int d,pavel=1;

    scanf("%d%d",&n,&d);

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=n ; ++u)scanf("%d",&tab[(i-1)*n+u]);
    }


    for(int i=1 ; i<n ; ++i)
    {
        for(int u=1 ; u<n ; ++u)
        {
            qclear(q);

            q.push({tab[(i-1)*n+u],(i-1)*n+u});
            visited[(i-1)*n+u]=1;


            for(int ii=0 ; ii<d ; ++ii)
            {
                if()



            }










        }


    }







    return 0;
}