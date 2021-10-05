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

int a,b,c;
int sito[100001];

vector<int>prim,divisors;

int main()
{
    scanf("%d%d",&a,&b);
    int div=2,cter,x,y,rem;
    c=abs(a-b);
    rem=c;
    for(int i=2 ; i<10000 ; ++i)
    {
        if(!sito[i])
        {
            prim.pb(i);
        }
        for(int u=i ; u<100000 ; u+=i)
        {
            sito[u]=1;
        }
    }
    cter=1;
    while(c>1)
    {
        while(c%div==0)
        {
            c/=div;
            divisors.pb(div);
        }
        div=prim[cter];
        cter++;
    }

    //if(divisors.size()==1){printf("brak");return 0;}

    for(int i=0 ; i<divisors.size() ; ++i)
    {
        for(int u=0 ; u<divisors.size() ; ++u)
        {
            if(i==u)continue;

            x=(divisors[i]+divisors[u])/2;
            y=max(divisors[i],divisors[u])-x;
            
            if(x*x+b==y*y+a)printf("%d ",x*x+b);
        }
    }


    return 0;
}