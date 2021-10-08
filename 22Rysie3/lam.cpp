#include <bits/stdc++.h>
using namespace std;

int main()
{   
    set<int>::iterator it; 
    set<int>ses;
    pair<int,int>t[100001];
    int n,x,y;
    scanf("%d",&n);
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&x,&y);
        t[i]={x+y,x-y};
    }

    sort(t,t+n);
    ses.insert(__INT_MAX__);

    for(int i=0 ; i<n ; ++i)
    {
        it=ses.lower_bound(-t[i].second);
        if(*it<__INT_MAX__) ses.erase(*it);
        ses.insert(-t[i].second);
    }

    printf("%d",ses.size()-1);


    return 0;
}