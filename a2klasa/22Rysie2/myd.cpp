#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
const int N=1048576;
long long tree[N*2][2],scn=1;
pair<long long,long long>krw[1000001];
void push(long long w)
{
    tree[w*2][0]+=tree[w][1];
    tree[w*2+1][0]+=tree[w][1];
    tree[w*2][1]+=tree[w][1];
    tree[w*2+1][1]+=tree[w][1];
    tree[w][1]=0;

}
void add(int w,long long p,long long k, long long x,long long y, long long val)
{

    if(p>y||k<x)
    {
        return;
    }
    if(p>=x && y<=k)
    {
        tree[w][0]+=val;
        tree[w][1]+=val;
        return;
    }
    push(w);
    add(w*2,p,(p+k)/2,x,y,val);
    add(w*2+1,(p+k)/2+1,k,x,y,val);
    tree[w][0]=max(tree[w*2][0],tree[w*2+1][0]);
}

long long get(long long w)
{
    return tree[1][0];
}
// void push(long long w)
// {
//     tree[w*2][0]+=tree[w][1];
//     tree[w*2+1][0]+=tree[w][1];
//     tree[w*2][1]+=tree[w][1];
//     tree[w*2+1][1]+=tree[w][1];
//     tree[w][1]=0;

// }

vector<pair<long long, long long>> G[1000001],K,P;
pair<long long, long long> opn[2000001];
vector<long long>T;


void defes(long long w,bool bg,long long pw)
{
    
    for(long long i=0 ; i<G[w].size() ; ++i)
    {
        if(G[w][i].first==pw)continue;
        
        P[G[w][i].second].first=scn;

        if(G[G[w][i].first].size()==1)
        {
            scn++;
        }   
        else
        {
            defes(G[w][i].first,1,w);
        }
        P[G[w][i].second].second=scn-1;
    }

}

int main()
{
    long long n, a, b, t, m;
    scanf("%lld", &n);

    for (int i = 0; i < n-1; ++i)
    {
        scanf("%lld%lld%lld", &a, &b, &t);
        // opn[i * 2] = {a, G[a].size() - 1};
        // opn[i * 2 + 1] = {b, G[b].size() - 1};
        G[a].push_back({b, i});
        G[b].push_back({a, i});
        K.push_back({a,b});
        T.push_back(t);
        P.push_back({0,0});

    }
    
    defes(1,0,0);

    for(int i=0 ; i<K.size() ; ++i)
    {
        add(1,N+1,2*N+1,P[i].first,P[i].second,T[i]);
    }

    scanf("%lld", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%lld%lld", &a, &t);
        add(1,N+1,2*N+1,P[a-1].first,P[a-1].second,t-T[a-1]);
        printf("%lld\n",get(2137));
        T[a-1]=t;
    }

    return 0;
}