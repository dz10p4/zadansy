#include <bits/stdc++.h>
using namespace std;
vector<long long> outputs;
vector<pair<int,int>>graph[1000001];
int minuser[1000001];
int visited[1000001];
long long output;

void defes(int w)
{
    visited[w]++;
    
    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        if(graph[w][i].second-minuser[graph[w][i].first]>0)
        {
            output+=graph[w][i].second-minuser[graph[w][i].first];
            minuser[graph[w][i].first]+=visited[graph[w][i].first];
            defes(graph[w][i].first);
        }

    }

    if(output)outputs.push_back(output);
    output=0;


}




int main()
{
    int n,m,a,b,c,sp;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        graph[a].push_back({b,c});
    }
    scanf("%d",&sp);

    defes(sp);

    vector<long long>::iterator dachu;

    dachu=max_element(outputs.begin(),outputs.end());

    printf("%lld",outputs[distance(outputs.begin(),dachu)]);


    // for(auto I:outputs)printf("%lld ",I);

    return 0;
}