#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#define pb push_back
using namespace std;
const int N=0;//1000000;

bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.first+a.second<b.first+b.second;
}


vector<pair<double,double>>P,F,L;
vector<int>H;


int main()
{
    int n,m,x,y,a,b,c,klp=0,klv=0,wyn=0;
    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&x,&y);
        P.pb({x+N,y+N});
    }    

    scanf("%d",&m);
    
    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        
        if(b!=0)F.pb({a/-b,(c+N)/-b});
        else H.pb(-c+N);
    }
    

    sort(H.begin(),H.end());
    sort(F.begin(),F.end(),comp);
    sort(P.begin(),P.end());

    for(int i=0 ; i<n ; ++i)
    {
        x=P[i].first;y=P[i].second;
        for(int u=0 ; u<H.size() ; ++u)
        {
            if(!u&&x<H[u])
            {
                klp=0;break;
            }
            if(x>=H[u]&&x<=H[u+1])
            {
                klp=u+1;break;
            }
            if(u==H.size()-1&&x>H[H.size()-1])
            {
                klp=u+2;
            }
        }
        for(int u=0 ; u<F.size() ; ++u)
        {
            if(!u&&y<x*F[u].first+F[u].second){klv=0;break;}
            if(y>=x*F[u].first+F[u].second&&y<=x*F[u+1].first+F[u+1].second){klv=u+1;break;}
            if(u==H.size()-1&&y>H[H.size()-1]){klv=u+2;}
        }
        L.pb({klp,klv});
    }

    sort(L.begin(),L.end(),comp);
    
    for(int i=1 ; i<L.size() ; ++i)
    {
        wyn+=abs(L[i-1].first-L[i].first);
        wyn+=abs(L[i-1].second-L[i].second);
    }

    printf("%d",wyn);

    return 0;
}