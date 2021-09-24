#include <bits/stdc++.h>
using namespace std;

int tvisited[1000001];
bool brat=0;
vector<int>bst;
vector<pair<int,int>>graph[1000001];

void defes(int w,int pw,int pind)
{
    tvisited[w]++;
    if(tvisited[w]>36500)return;
    if(tvisited[w]==50&&graph[pw][pind].second==50)
    {
        brat=1;
        return;
    }
    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        graph[w][i].second++;
        defes(graph[w][i].first,w,i);
    }
}

int main()
{
    int n,m,inp1,inp2,bist=0;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        graph[inp2].push_back({inp1,0});
    }

    defes(n+1,0,0);

    for(int i=0 ; i<=n ; ++i)
    {
        bist=max(bist,tvisited[i]);
    }

    if(brat==1)
    {
        for(int i=0 ; i<=n ; ++i)
        {
            if(tvisited[i]>=50)bst.push_back(i);
        }
        printf("zawsze\n");
    }
    else 
    {
        for(int i=0 ; i<=n ; ++i)
        {
            if(tvisited[i]==bist)bst.push_back(i);
        }
        printf("%d\n",bist);
    }

    printf("%ld\n",bst.size());
    for(int i=0 ; i<bst.size() ; ++i)printf("%d ",bst[i]);

    return 0;
}