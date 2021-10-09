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

int T[901],prefl[901],prefp[901];

int main()
{
    int n,bst=INT_MAX,bind,wyn=0;

    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&T[i]);
    }
    sort(T,T+n);
    // prefl[0]=T[0];
    // prefp[n-1]=T[n-1];
    // for(int i=1 ; i<n ; ++i)
    // {
    //     prefl[i]=prefl[i-1]+T[i];
    // }

    // for(int i=n-2 ; i>=0 ; --i)
    // {
    //     prefp[i]=prefp[i+1]+T[i];
    // }

    // for(int i=0 ; i<n ; ++i)
    // {
    //     if(abs(prefp[i]-prefl[i])<bst){bst=abs(prefp[i]-prefl[i]);bind=i;}
    // }

    for(int i=0 ; i<n/2+1 ; ++i)
    {
        wyn+=T[i];
    }

    printf("%d",wyn);
    return 0;
}