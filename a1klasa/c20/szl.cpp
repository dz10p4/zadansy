#include <stdio.h>
#include <vector>

using namespace std;

int links,a,b,out=0;

vector <int> graph[100001];

int main()
{
    scanf("%d",&links);

    for(int i=0;i<links-1;i++){
        scanf("%d%d",&a,&b);

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1 ; i<links+1 ; i-=-1)
    {
      if(graph[i].size()>out){out=graph[i].size();}
    }
printf("%d",out);
    return 0;
}
