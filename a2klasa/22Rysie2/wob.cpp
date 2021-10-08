#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<int,int>,int>>V;


bool comp(pair<pair<int,int>,int>p1,pair<pair<int,int>,int>p2)
{   
    return p1.first.first*p2.first.second<p1.first.second*p2.first.first;
}



int main()
{
    int n,x,y,l;
    scanf("%d",&n);
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d",&x,&y,&l);
        
        V.push_back({{x+l,y},1});
        V.push_back({{x,y+l},-1});
    }

    sort(V.begin(),V.end(),comp);

    for(auto I:V){printf("%d %d\n",I.first.first,I.first.second);}
    return 0;
}