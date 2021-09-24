#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
using namespace std;
vector<int>::iterator itt;
map<int,int>mapsko;
vector<int>v;

int main()
{
    int l=1,k=0,a,b,od,odl;

    for(int i=0 ; i<100000 ; ++i)
    {
        mapsko[l*l-k*k]=k;
        v.push_back(k*k);
        l++;k++;
        
    }

    scanf("%d%d",&a,&b);
    if(b>a)swap(a,b);
    sort(v.begin(),v.end());
    if(a==b)
    {
        itt=upper_bound(v.begin(),v.end(),a);
        odl=itt-v.begin()-1;
        printf("%d",v[odl]-a);
        return 0;
    }
    if(mapsko[a-b]==0){printf("brak");return 0;}
    od=mapsko[a-b];
    a-=od;b-=od;
    
    printf("%d",od-b);



    return 0;
}