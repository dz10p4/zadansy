#include <bits/stdc++.h>
using namespace std;

vector<int>G[2501];
int poin[2501][28],otp;
bool visited[2501];
void defes(int w)
{
    visited[w]=1;

    for(int i=0 ; i<G[w].size() ; ++i)
    {
        if(!visited[G[w][i]])defes(G[w][i]);

    }



}



int tonumb(char c)
{
    return c-'a';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,cter=1,nd=1;
    string k;
    cin>>n;
    
    for(int i=0 ; i<n ; ++i)
    {
        cin>>k;

        for(int u=0 ; u<k.size() ; ++u)
        {
            if(!poin[cter][tonumb(k[u])])
            {
                poin[cter][tonumb(k[u])]=nd;
                G[cter].push_back(poin[cter][tonumb(k[u])]);
                
                cter=nd;nd++;
                cter++;
            }
            else 
            {
                cter=poin[cter][tonumb(k[u])];
                nd=poin[cter][tonumb(k[u])];
            }
        }
        //nd+=cter;
        cter=1;
        
    }





    return 0;
}