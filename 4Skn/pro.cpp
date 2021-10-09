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

const int N=524288/2;
int minix,maxix,maxyy,minyy;
int tree[N*2][4],wyn;


void query(int w,int p,int k,int x,int y)
{
    if(p>y||k<x)return;
    if(p>=x&&y>=k)
    {
        minix=min(minix,tree[w][1]);
        maxix=max(maxix,tree[w][0]);
        maxyy=max(maxyy,tree[w][2]);
        minyy=min(minyy,tree[w][3]);
        return;
    }
    query(w*2,p,(p+k)/2,x,y);
    query(w*2+1,(p+k)/2+1,k,x,y);
}



int main()
{

    int n,t,x1,x2,y1,y2;

    scanf("%d%d",&n,&t);
    

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        tree[N+i][0]=x1;
        tree[N+i][1]=x2;
        tree[N+i][2]=y1;
        tree[N+i][3]=y2;
    }

    for(int i=N-1 ; i>0 ; --i)
    {
        tree[i][0]=max(tree[i*2][0],tree[i*2+1][0]);
        tree[i][1]=min(tree[i*2][1],tree[i*2+1][1]);
        tree[i][2]=max(tree[i*2][2],tree[i*2+1][2]);
        tree[i][3]=min(tree[i*2][3],tree[i*2+1][3]);
    }


    for(int i=0 ; i<t ; ++i)
    {
        scanf("%d%d",&x1,&x2);

        minix=INT_MAX;
        maxix=0;
        maxyy=0;
        minyy=INT_MAX;

        query(1,N,2*N-1,x1+N-1,x2+N-1);
        
        printf("%d\n",(abs(maxix-minix))*(abs(maxyy-minyy)));
    }

    return 0;
}