#include <bits/stdc++.h>
using namespace std;

bool sito[3000001];
long long outp;
vector<int>v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;

    cin>>k;
    int es=2,tym=2;
    while(es<300001)
    {
        tym=es;
        while(tym<300001)
        {       
            tym+=es;
            sito[tym]=1;
        }
        tym=0;
        es++;
    }


    for(int i=2 ; i<300001 ; i++)
    {
        if(!sito[i])v.push_back(i);
    }

    for(int i=0 ; i<k.length() ; ++i)
    {
        outp+=v[i]*(k[i]-'0');
    }
    cout<<outp;
    // cout<<endl;
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     printf("%d  ",v.size());
    // }
    

    return 0;
}