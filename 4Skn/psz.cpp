#include <bits/stdc++.h>
using namespace std;

bool tab[5000001];
priority_queue<pair<int,int>>pq;
int costs[5000001],n,m;
pair<int,int>takout;

void djextra()
{

    while(!pq.empty())
    {
        takout=pq.top();
        pq.pop();
        int w=takout.second;
        int i=(takout.second-1)/m+1,u=(takout.second-1)%m+1;

        if(i>1&&tab[(i-2)*m+u])
        {
            if(costs[takout.second]<costs[(i-2)*m+u])
            {
                costs[(i-2)*m+u]=costs[takout.second];
                pq.push({-costs[(i-2)*m+u],(i-2)*m+u});
            }
        }
        if(i>2&&tab[(i-3)*m+u])
        {

            if(costs[takout.second]+1<costs[(i-3)*m+u])
            {
                costs[(i-3)*m+u]=costs[takout.second]+1;
                pq.push({-costs[(i-3)*m+u],(i-3)*m+u});
            }


        }
        if(i<n&&tab[i*m+u])
        {
            if(costs[takout.second]<costs[i*m+u])
            {
                costs[i*m+u]=costs[takout.second];
                pq.push({-costs[i*m+u],i*m+u});
            }

        }
        if(i<n-1&&tab[(i+1)*m+u])
        {
            if(costs[takout.second]+1<costs[(i+1)*m+u])
            {
                costs[(i+1)*m+u]=costs[takout.second]+1;
                pq.push({-costs[(i+1)*m+u],(i+1)*m+u});
            }

        }
        if(u>1&&tab[(i-1)*m+u-1])
        {
            if(costs[takout.second]<costs[(i-1)*m+u-1])
            {
                costs[(i-1)*m+u-1]=costs[takout.second];
                pq.push({-costs[(i-1)*m+u-1],(i-1)*m+u-1});
            }

        }
        if(u>2&&tab[(i-1)*m+u-2])
        {
            if(costs[takout.second]+1<costs[(i-1)*m+u-2])
            {
                costs[(i-1)*m+u-2]=costs[takout.second]+1;
                pq.push({-costs[(i-1)*m+u-2],(i-1)*m+u-2});
            }


        }
        if(u<m&&tab[(i-1)*m+u+1])
        {
            if(costs[takout.second]<costs[(i-1)*m+u+1])
            {
                costs[(i-1)*m+u+1]=costs[takout.second];
                pq.push({-costs[(i-1)*m+u+1],(i-1)*m+u+1});
            }

        }
        if(u<m-1&&tab[(i-1)*m+u+2])
        {
            if(costs[takout.second]+1<costs[(i-1)*m+u+2])
            {
                costs[(i-1)*m+u+2]=costs[takout.second]+1;
                pq.push({-costs[(i-1)*m+u+2],(i-1)*m+u+2});
            }


        }
    }

}


int main()
{
    fill(costs,costs+4000001,__INT_MAX__);
    int x1,x2,y1,y2,ws,wk;
    char c;
    scanf("%d%d%d%d%d%d",&n,&m,&x1,&y1,&x2,&y2);
    getchar_unlocked();

    ws=(x1-1)*m+y1;
    wk=(x2-1)*m+y2;

    pq.push({0,ws});
    costs[ws]=0;

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

    
    djextra();

    if(costs[wk]==__INT_MAX__)printf("-1");
    else printf("%d",costs[wk]);




    return 0;
}