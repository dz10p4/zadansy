#include <bits/stdc++.h>
using namespace std;

int graph[1000001];
int ubited[1000001];
vector<int>nieubited;
bool visited[1000001];



int main()
{
    int n,inp;

    scanf("%d",&n);

    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&inp);
        graph[i]=inp;
        ubited[inp]=1;
    }

    for(int i=1 ; i<=n ; ++i)if(ubited[i])nieubited.push_back(i);

    




    return 0;
}