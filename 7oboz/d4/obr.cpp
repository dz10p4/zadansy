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
const int N=8192;

int tree[5001][2*N][2];

void add(int v,int w,int x,int y,int p,int k,int val)
{
    if(k>x || p<y)return;
    if(x>=p && y<=k)
    {
        tree[]

    }


}


int main()
{
    int n,x1,x2,y1,y2;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        add(x1,1,y1,y2,0,N-1,1);
    }



    return 0;
}