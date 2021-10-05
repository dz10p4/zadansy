#include <bits/stdc++.h>
using namespace std;

vector<int>G[1000001];
int V[1000001][4];
vector<string>S;


int findL(int w,int a)
{
    if(G[w].size()>0&&G[w][0]==a)return 0;
    if(G[w].size()>1&&G[w][1]==a)return 1;
    if(G[w].size()>2&&G[w][2]==a)return 2;
    if(G[w].size()>3&&G[w][3]==a)return 3;
    else return -1;

}



int transl(char a)
{
    if(a=='K')return 0;
    if(a=='U')return 1;
    if(a=='B')return 2;
    if(a=='A')return 3;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;
    int n,inp,w=0,a;
    char xd;
    cin>>n;

    for(int i=0 ; i<n ; ++i)
    {
        cin>>k;
        S.push_back(k);

        for(int u=0 ; u<k.length() ; ++u)
        {
            if(!V[w][transl(k[u])])
            {
                V[w][transl(k[u])]=w+1;
                G[w].push_back(w+1);
                w++;
            }
            else
            {
                //w=w;

            }
        }



    }
    



    return 0;
}