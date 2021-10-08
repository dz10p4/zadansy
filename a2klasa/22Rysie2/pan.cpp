#include <bits/stdc++.h>
using namespace std;

int x[1000001],y[1000001];

int main()
{
    long long bruh;
    int n,m,mx,inp1,inp2;



    scanf("%d%d",&n,&m);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp1);
        mx=max(mx,inp1);
        x[i]=inp1;
    }
    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d",&inp1);
        mx=max(mx,inp1);
        y[i]=inp1;
    }

    bruh=mx*n*m;

    





}