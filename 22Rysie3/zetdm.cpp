#include <bits/stdc++.h>
#define mod 1000000009
using namespace std;
int a, b, c;
long long w, w1, x, xx, xxx;

long long sil(long long aa)
{
    xxx=1;
    for(int i=2; i<=aa; ++i)
    {
        xxx=(xxx*i)%mod;
    }
    return xxx;
}

long long sp(long long aa)
{
    x=mod-2;
    xx=1;

    while(x>0)
    {
        if(x%2==1)
        {
            xx*=aa;
        }
        aa*=aa;
        x/=2;
        aa%=mod;
        xx%=mod;
    }
    return xx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    scanf("%d%d%d",&a,&b,&c);
    w=sil(a+b+c);
    w1=sp((sil(a)*sil(b)%mod)*sil(c))%mod;
    cout<<(w*w1)%mod;

}