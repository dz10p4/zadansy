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

vector<string>V[20],V2[20];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string k;
    cin>>n;
    
    for(int i=0 ; i<n ; ++i)
    {
        cin>>k;
        V[i].push_back(k);
    }

    sort(V,V+n);

    



    return 0;
}