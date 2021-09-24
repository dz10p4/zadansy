#include <bits/stdc++.h>
using namespace std;

vector<string> tab;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;
    int n;

    cin>>n;

    for(int i=0 ; i<n; ++i)
    {
        cin>>k;
        
        tab.push_back(k);

    }

    sort(tab.begin(),tab.end());

    for(int i=0 ; i<n-1 ; ++i)
    {
        if(tab[i].size()==tab[i+1].size())
        {
            


        }


    }

    return 0;
}