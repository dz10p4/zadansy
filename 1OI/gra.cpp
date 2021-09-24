#include <bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
using namespace std;

int mx=__INT_MAX__;
pair<int,int> tako;
vector<pair<int,int>> graph[2100005];
vector<pair<int,int>> sortedholes;
vector<int> edges[2100005];
vector<int> inbetweens[2100005];
int costs[2100005],w;
bool visited[2100005];
priority_queue<pair<int,int>> pq;
int fgablot[2100005];


void DJEXTRAA()
{
    while(!pq.empty())
    {
        tako=pq.top();
        pq.pop();
        w=tako.second;
        for(int i=0 ; i<graph[w].size() ; ++i)
        {   
            if(costs[w]+graph[w][i].ss<costs[graph[w][i].ff])
            {
                costs[graph[w][i].ff]=costs[w]+graph[w][i].ss;
                pq.push({-costs[graph[w][i].ff],graph[w][i].ff});
            }

        }
    }
}


int main()
{
    pq.push({0,0});
    fill(costs,costs+2100005,mx);
    costs[0]=0;
    int n,x,z,t,inp,pawel=1;
    scanf("%d%d%d",&n,&x,&z);
    fgablot[1]=1;
    for(int i=1 ; i<=n ; ++i)
    {
        
        scanf("%d",&t);
        
        edges[i].pb(pawel);
        fgablot[i]=pawel;
        for(int u=0 ; u<t ; ++u)
        {
            scanf("%d",&inp);
            ++pawel;
            inbetweens[i].pb(inp);
            edges[i].pb(pawel);
            graph[pawel].pb(make_pair(pawel-1,1));
            //if(inp==x){disc.insert(i+1);}
        }
        graph[0].pb({pawel,0});
        // graphbg[i]=graphbg[i-1]+1+t;
        // graphst[i]=graphst[i-1]+1+t;
        ++pawel;
    }

    //sort(sortedholes.begin(),sortedholes.end());

    // for(int i=0 ; i<sortedholes.size() ; ++i)
    // {
    //     int zp=sortedholes[i].first;
    //     holes[sortedholes[i].second].push_back(pawel);
    //     for(int u=i+1 ; sortedholes[u].first==zp ; ++u)
    //     {
    //         holes[sortedholes[u].second].push_back(pawel);
    //     }
    //     pawel++;
    // }

    for(int i=n-1 ; i>0 ; --i)
    {
        vector<int>::iterator bruh;
        for(int u=1 ; u<edges[i].size() ; ++u)
        {
            bruh=lower_bound(inbetweens[i+1].begin(),inbetweens[i+1].end(),inbetweens[i][u-1]);
            graph[edges[i+1][bruh-inbetweens[i+1].begin()]].pb({edges[i][u]-1,0});
            graph[edges[i][u]].pb({edges[i+1][bruh-inbetweens[i+1].begin()],1});
        }
    }

    //cout<<"macias";

    // x=pawel+1;

    // for(int i=0 ; i<n ; ++i)
    // {
    //     for(int u=0  ;u<holes[i].size() ; ++u)
    //     {
    //         printf("%d ",holes[i][u]);
    //     }

    //     printf("\n");
    // }
    //cout<<"macias";
    // for(int i=0 ; i<n ; ++i)
    // {
    //     for(int u=0  ;u<holes[i].size() ; ++u)
    //     {
    //         holep[holes[i][u]-2].push_back(i+1);
    //     }
    // }

    // for(int i=0 ; i<x-3 ; ++i)
    // {
    //     for(int u=0  ;u<holep[i].size() ; ++u)
    //     {
    //         printf("%d ",holep[i][u]);
    //     }

    //     printf("\n");
    // }
    // graphbg[1]=0;
    // graphst[1]=0;
    // for(int i=1 ; i<=n ; ++i)
    // {
    //     graphbg[i+1]=graphbg[i]+holes[i-1].size()+1;
    //     graphst[i+1]=graphst[i]+holes[i-1].size()+1;
    //     //spierws.insert(graphbg[i+1]);
    // }
    // printf("\n");
    // for(int i=1 ; i<=n ; ++i)
    // {
    //     printf("%d\n",graphbg[i]);
    // }
    //cout<<"macias";
    // for(int i=0 ; i<x-3 ; ++i)
    // {
    //     for(int u=0 ; u<holep[i].size() ; ++u)
    //     {
    //         int rzadd=holep[i][u];
            
    //         if(rzadd<n)
    //         {
    //             //graph[graphbg[rzadd]].push_back(make_pair(graphbg[rzadd+1],0));
    //             graph[graphbg[rzadd+1]].push_back(make_pair(graphbg[rzadd],0));
    //             if(graphbg[rzadd]+1<graphst[rzadd+1])graph[graphbg[rzadd]+1].push_back(make_pair(graphbg[rzadd+1],1));
    //             //if(graphbg[rzadd]+1<graphst[rzadd+1])graph[graphbg[rzadd+1]].push_back(make_pair(graphbg[rzadd]+1,1));
    //         }

    //         if(graphbg[rzadd]+1<graphst[rzadd+1]){graph[graphbg[rzadd]+1].push_back(make_pair(graphbg[rzadd],1));}
    //         //if(graphbg[rzadd]+1<graphst[rzadd+1]){graph[graphbg[rzadd]].push_back(make_pair(graphbg[rzadd]+1,1));}
    //         graphbg[rzadd]++;
    //     }

    // }

    
    // for(int i=2 ; i<=n+1 ; ++i)
    // {   
    //         costs[graphst[i]-1]=0;

    //         q.push(make_pair(0,graphst[i]-1));

        
    // }

    //cout<<"macias";
    
    DJEXTRAA();
     

    for(int i=0 ; i<z ; ++i)
    {
        scanf("%d",&inp);

        printf("%d\n",costs[fgablot[inp]]);
    }


    //cout<<"macias";


    return 0;
}