#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>ppoints;
vector<pair<int,int>>outies;
int controlvar;
int main()
{
    int n,st,nd;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&st,&nd);
        ppoints.push_back({st,0});
        ppoints.push_back({nd,1});
    }
    sort(ppoints.begin(),ppoints.end());
    

    for(int i=0 ; i<ppoints.size() ; ++i)
    {
        bool jajco=1;
        if(ppoints[i].second&&ppoints[i+1].first!=ppoints[i].first+1)controlvar--;
        else if(ppoints[i+1].first!=ppoints[i].first+1) controlvar++;
        
        if(!outies.empty()){if(outies[outies.size()-1].first==-1)jajco=0;}
        if(controlvar==1&&jajco)outies.push_back({-1,ppoints[i].first});
        if(controlvar==0)outies.push_back({-2,ppoints[i].first});

    }

    //for(auto I:outies){printf("%d %d\n",I.first,I.second);}

    printf("%ld\n",outies.size()/2);

    for(int i=0 ; i<outies.size() ; i+=2)
    {
        printf("%d %d\n",outies[i].second,outies[i+1].second);
    }

    return 0;
}