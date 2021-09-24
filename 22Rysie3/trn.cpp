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

vector<pair<int,int>>par;



set<pair<int,int>>sett[4];

int main()
{
    int n,inp1,inp2,zr1=0,zr2=0,zr3=0,zr4=0;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&inp1,&inp2);

        if(inp1==0&&inp2>0)zr1=1;
        else if(inp1==0&&inp2<0)zr2=1;
        else if(inp1<0&&inp2==0)zr3=1;
        else if(inp1>0&&inp2==0)zr4=1;
        else if(inp1>0&&inp2>0)sett[0].insert({inp1/__gcd(inp1,inp2),inp2/__gcd(inp1,inp2)});
        else if(inp1>0&&inp2<0)sett[1].insert({inp1/__gcd(inp1,inp2),inp2/__gcd(inp1,inp2)});//par.pb({inp1,inp2});
        else if(inp1<0&&inp2>0)sett[2].insert({inp1/__gcd(inp1,inp2),inp2/__gcd(inp1,inp2)});
        else if(inp1<0&&inp2<0)sett[3].insert({inp1/__gcd(inp1,inp2),inp2/__gcd(inp1,inp2)});
    }


    //sort(par.begin(),par.end(),comp);

    printf("%ld",sett[0].size()+sett[1].size()+sett[2].size()+sett[3].size()+zr1+zr2+zr3+zr4);

    return 0;
}