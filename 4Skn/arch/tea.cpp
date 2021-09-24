#include <bits/stdc++.h>
using namespace std;
bool compa(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;

}
int main()
{
    vector<pair<int,int>> tab;
    int n,inp,gth=0;
    vector<int>outer[100001];
    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);
        tab.push_back(make_pair(i+1,inp));
    }

    sort(tab.begin(),tab.end(),compa);

    for(int i=0 ; i<n ;)
    {
        for(int u=i ; u<tab[i].second+i ; ++u)
        {
            outer[gth].push_back(tab[u].first);
        }
        i+=tab[i].second;gth++;
    }

    // for(int i=0 ; i<tab.size() ; i++)
    // {
    //     printf("%d %d\n",tab[i].first,tab[i].second);
    // }

    printf("%d\n",gth);

    for(int i=0 ; i<gth; i++)
    {
        printf("%ld ", outer[i].size());
        for(int u=0 ; u<outer[i].size();++u)printf("%d ",outer[i][u]);
        printf("\n");
    }


    return 0;
}