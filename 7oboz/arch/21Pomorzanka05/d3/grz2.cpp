#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>graph[1000001],graph2[1000001];
bitset<1000001>visited;
vector<int>outed;
int kosaraju[1000001],k=1;
vector<int>grouped[1000001];
long long output;
bool zerohappens=0;
int repetitioncount=0;
void defes(int w)
{
    visited[w]=1;

    for(int i=0 ; i<graph[w].size() ;++i)
    {
        if(!visited[graph[w][i].first])
        {
            defes(graph[w][i].first);   
        }
    }
    outed.push_back(w);
}

void defes2(int w)
{
    kosaraju[w]=k;
    visited[w]=1;
    for(int i=0 ; i<graph2[w].size() ; ++i)
    {
        if(!visited[graph2[w][i].first])defes2(graph2[w][i].first);
    }
    
}


void defes3(int w)
{
    for(int i=0 ; i<grouped[w].size() ; i++)
    {
        repetitioncount=0;
        while(graph[w][grouped[w][i]].second>0)
        {
            output+=graph[w][grouped[w][i]].second;
            graph[w][grouped[w][i]].second-=repetitioncount;
            repetitioncount++;
            if(graph[w][grouped[w][i]].second<0)output+=graph[w][grouped[w][i]].second;
        }
        
        defes3(grouped[w][i]);
    }


}




int main()
{
    int n,m,a,b,c,poc;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);

        graph[a].push_back({b,c});
        graph2[b].push_back({a,c});
    }
    scanf("%d",&poc);
    defes(poc);
    
    for(int i=1 ; i<=n ; ++i)
    {
        if(!visited[i])defes(i);
    }

    visited.reset();
   
    for(int i=outed.size()-1 ; i>=0 ; --i)
    {
        if(!visited[outed[i]])
        {
            defes2(outed[i]);
            k++;
        }
    }

    for(int i=1 ; i<=n ; ++i)
    {
        grouped[kosaraju[i]].push_back(i);
    }
    // for(int i=1 ; i<=n ; ++i)
    // {
    //     for(int u=0 ; u<grouped[i].size() ;++u)printf("%d ",grouped[i][u]);
    //     printf("\n");
    // }

    for(int i=1 ; i<=n ; ++i)
    {
        defes3(grouped[i][0]);
    }

    printf("%lld",output);


    return 0;
}