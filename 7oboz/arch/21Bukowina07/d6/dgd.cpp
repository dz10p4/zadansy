#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>p;

bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}

int main()
{
    int n,inp;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);
        p.push_back({i+1,inp});
    }
    
    sort(p.begin(),p.end(),comp);

    for(auto I:p)cout<<I.first<<endl;

    return 0;
}