#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>G[300001];
int colors[300001];
queue<int>q;
bool visited[300001];
int directaccessred[300001],directaccessblue[300001];

int op(int c){if(c==1)return 2; else return 1;}

void defes(int w,int c)
{
    visited[w]=1;
    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i].first]&&colors[G[w][i].first]!=c)
        {
            if(G[w][i].second!=-1){G[w][i].second=2;}
            else G[w][i].second=c;
        }
    }


}


int main()
{
    int n,inp1,inp2;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&colors[i]);
        if(colors[i]!=0){q.push(i);visited[i]=1;}
    }

    for(int i=1 ; i<n ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);
        G[inp1].push_back({inp2,-1});
        G[inp2].push_back({inp1,-1});
    }

    while(!q.empty())
    {
        int w=q.front();
        q.pop();

        for(int i=0 ; i<G[w].size() ; ++i)
        {
            if(colors[w]==1){directaccessred[G[w][i].first]++;}
            if(colors[w]==2){directaccessblue[G[w][i].first]++;}
            if(directaccessblue[G[w][i].first]>=2&&directaccessred[G[w][i].first]>=2){printf("0");return 0;}
            else if (directaccessblue[G[w][i].first]>=2&&!colors[G[w][i].first])
            {
                colors[G[w][i].first]=2;
                if(!visited[G[w][i].first]){q.push(G[w][i].first);visited[G[w][i].first]=1;}
            }
            else if (directaccessred[G[w][i].first]>=2&&!colors[G[w][i].first])
            {
                colors[G[w][i].first]=1;
                if(!visited[G[w][i].first]){q.push(G[w][i].first);visited[G[w][i].first];}
            }
        }
    }

    for(int i=1 ; i<=n ; ++i)
    {
        if(colors[i]!=0){q.push(i);visited[i]=1;}
    }



    fill(visited,visited+300001,0);    
    while(!q.empty())
    {
        int w=q.front();
        q.pop();

        for(int i=0 ; i<G[w].size() ; ++i)
        {
            


        }



    }
    

    for(int i=1 ; i<=n ; ++i)
    {
        printf("%d ",colors[i]);
    }


    return 0;
}