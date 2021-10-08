#include <bits/stdc++.h>
using namespace std;
vector<int>V;
vector<int>::iterator dachu;
int transt[1000001];
int main()
{
    int n,t,tt,a,inp;
    scanf("%d%d",&n,&t);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&tt);
        V.push_back(tt);
        transt[i+1]=tt;
    }

    sort(V.begin(),V.end());



    for(int i=0 ; i<t ; ++i)
    {
        scanf("%d",&inp);
        dachu=upper_bound(V.begin(),V.end(),inp);

        printf("%d\n",V.size()-1-distance(dachu,V.end()));

    }


    return 0;
}