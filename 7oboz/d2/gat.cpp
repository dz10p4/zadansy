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

vector<pair<int,int>>G[251],P[501];

// struct ye
// {
//     int pr;
//     int stj;
//     int stpr;
// };


/* 
    1-musza byc rozne
    2-co najmniej jeden musi byc 1
    3-co najmniej jeden musi byc 0
    4-obojetnie
 */
int main()
{
    int n,m,inp1,inp2,s1,s2;
    scanf("%d%d",&n,&m);
    

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d%d%d",&inp1,&s1,&inp2,&s2);
        G[i+1].pb({inp1,s1});
        G[i+1].pb({inp2,s2});
        if(s1==s2&&s1==0){P[inp1].pb({inp2,3});P[inp2].pb({inp1,3});}
        else if(s1==s2&&s1==1) { P[inp1].pb({inp2,2});P[inp2].pb({inp1,2}); }
        else {P[inp1].pb({inp2,1}); P[inp2].pb({inp1,1}); }
    }
    



    return 0;
}