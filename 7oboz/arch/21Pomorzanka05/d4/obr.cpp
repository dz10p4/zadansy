#include <bits/stdc++.h>
#define gcu getchar_unlocked
using namespace std;
int used[28],bup[28];
char grid1[501][501],grid2[501][501];
int transx[501],transy[501];
vector<int>V1[501];
vector<int>V2[501],V3,V4,V5[501];
set<vector<int>>S;
pair<int,int>mnums;
int outp;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    gcu();

    for(int i=0 ; i<n ; ++i)
    {
        for(int u=0 ; u<m ; ++u)
        {
            grid1[i+1][u+1]=gcu();
            if(!u){used[grid1[i+1][u+1]]++;V3.push_back(grid1[i+1][u+1]);V4.push_back(grid1[i+1][u+1]);}
            V1[u].push_back(grid1[i+1][u+1]);
        }
        gcu();
    }

    sort(V3.begin(),V3.end());
    
    gcu();
    for(int i=0 ; i<m ; ++i)
    {
        gcu();
        sort(V1[i].begin(),V1[i].end());
        S.insert(V1[i]);
    }
    for(int i=0 ; i<n ; ++i)
    {
        for(int u=0 ; u<m ; ++u)
        {
            grid2[i+1][u+1]=gcu();
            V2[u].push_back(grid2[i+1][u+1]);
            V5[u].push_back(grid2[i+1][u+1]);
        }
        gcu();
    }

    for(int i=0 ; i<m ; ++i)
    {
        sort(V2[i].begin(),V2[i].end());   
    }

    for(int i=0 ; i<m ; ++i)
    {
        if(V2[i]==V3){mnums.first=i+1;mnums.second=0;}
    }

    outp+=m-mnums.first+1;

    for(int i=0 ; i<n ; ++i)
    {
        V2[]


    }

    printf("%d",outp);

    return 0;
}