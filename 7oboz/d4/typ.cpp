#include <bits/stdc++.h>
using namespace std;

vector<string>S;
char T[21];
vector<char>R;

bool comp(string a,string b)
{
    return a>b;
}


void sus(int hm)
{
    for(int i=0 ; i<hm ; ++i)R.push_back('-');
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;
    int n,cter=0;
    cin>>n;
    for(int i=0 ; i<n ; ++i)
    {
        cin>>k;
        S.push_back(k);
    }

    sort(S.begin(),S.end(),comp);
    
    for(int i=0 ; i<S[0].size() ; ++i)
    {
        T[i]=S[0][i];
        R.push_back(T[i]);
    }

    R.push_back('P');

    for(int i=1 ; i<n ; ++i)
    {
        cter=0;
        for(int u=0 ; u<min(S[i-1].size(),S[i].size()) ; ++u)
        {
            if(S[i-1][u]!=S[i][u])break;
            cter++;
        }

        sus(S[i-1].size()-cter);

        for(int u=cter ; u<S[i].size() ; u++)
        {
            R.push_back(S[i][u]);
        }

        R.push_back('P');

    }

    
    
    printf("%ld\n",R.size());

    for(auto I:R)printf("%c\n",I);


    return 0;
}