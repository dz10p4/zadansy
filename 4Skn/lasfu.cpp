#include <bits/stdc++.h>
using namespace std;

bool visited[1000001],globend=0;

int rep[1000001],size[1000001],d,remtab[1000001];



int find(int a)
{
    if(rep[a]!=a)rep[a]=find(rep[a]);
    return rep[a];
}

void _union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)return;
    rep[a]=b;
    size[b]+=size[a];
}


int main()
{
    int n,inp;

    pair<int,int> takeaway;

    priority_queue<pair<int,int>>pq;

    scanf("%d%d",&n,&d);


    for(int i=0 ; i<1000000 ; ++i)
    {
        rep[i]=i;
        size[i]=1;
    }


    for(int i=0 ; i<n ; ++i)
    {
        for(int u=1 ; u<=n ; ++u)
        {
            scanf("%d",&inp);
            // remtab[i*n+u]=inp;
            pq.push({-inp,i*n+u});

        }

    }

    while(!pq.empty())
    {
        takeaway=pq.top();
        pq.pop();
        visited[takeaway.second]=1;
        
        if(visited[takeaway.second-1]&&takeaway.second%n!=1)_union(takeaway.second,takeaway.second-1);
        
        if(visited[takeaway.second+1]&&(takeaway.second+1)%n!=1)_union(takeaway.second,takeaway.second+1);
        
        if(visited[takeaway.second-n]&&takeaway.second>n)_union(takeaway.second,takeaway.second-n);
        
        if(visited[takeaway.second+n]&&takeaway.second<=n*n-n)_union(takeaway.second,takeaway.second+n);

        if(size[find(takeaway.second)]>=d){printf("%d",-takeaway.first);return 0;}

        
    }



    return 0;
}