#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int l=0;
vector<int> graph[5001];
bool visited;
bool veseted[5001];
void defes(int w, int visited)
{
    for(auto i: graph[w])
    {   
        if(i==visited)continue;
        if(!l)
        {
            printf("%d\n",w);
            veseted[w]=1;
            l=3;
        }
        l--;
        defes(i,w);
        l--;
        
    }
    
    if(!veseted[w]){printf("%d\n",w);l=3;}


}


int main()
{
    int n,inp1,inp2;

    scanf("%d",&n);

    for(int i=0 ; i<n-1 ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);

        graph[inp2].pb(inp1);
        graph[inp1].pb(inp2);
    }


    defes(1,0);



    return 0;
}