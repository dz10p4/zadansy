#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <limits.h>
#define pb push_back
using namespace std;

const int N=262144;

int tree[N*2];

vector<int>O[500001],C[500001],SD;

void add(int w,int p,int k,int x, int y)
{



}

int main()
{
    int n,l,d,p,g;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&l,&d,&p,&g);
        l+=200000;p+=200000;d+=200000;g+=200000;
        O[l].pb(g);
        C[l].pb(d);
        O[p].pb(d);
        C[p].pb(g);
    }

    for(;; )


    return 0;
}