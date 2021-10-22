#include <bits/stdc++.h>
using namespace std;

bitset<150001> bis;
bitset<150001> bid;
vector<pair<int,int>> graph[100001];
bool dvisited[1000001];
bool tsu=0;
int fout[100001];
struct data
{   
    char task;
    int one;
    int two;
};



void defes(int w, bitset<150001> bbu)
{
    dvisited[w]=1;
    fout[w]=bbu.count();
    for(int i=0 ; i<graph[w].size() ; ++i)
    {
        if(!dvisited[graph[w][i].first]){bbu[graph[w][i].second]=1;defes(graph[w][i].first,bbu);}

    }
}



int main()
{
    data tasks[150001];
    int n,m,z,inp1,inp2,inp3;

    scanf("%d%d%d",&n,&m,&z);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d",&inp1,&inp2,&inp3);
        graph[inp1].push_back({inp2,inp3});
        graph[inp2].push_back({inp1,inp3});
    }

    for(int i=0 ; i<z ; ++i)
    {
        cin>>tasks[i].task>>tasks[i].one;

        // if(tasks[i].task=='Z')
        // {
        //     cin>>tasks[i].one;
        // }
        if(tasks[i].task=='B')
        {
            cin>>tasks[i].two;
            tsu=1;
        }
    }

    if(!tsu)
    {
        defes(1,bid);
        for(int i=0 ; i<z ; ++i)
        {
            printf("%d\n",fout[tasks[i].one]);

        }



    }
    else
    {
        for(int i=0 ; i<z ; ++i)
        {
            if(tasks[i].task=='Z')
            {
                


            }



        }





    }









    return 0;
}