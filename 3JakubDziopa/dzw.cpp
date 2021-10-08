#include <bits/stdc++.h>
using namespace std;
int bucket[10001];

inline void readUI(unsigned int *i)
{
    register unsigned int r=0;
    register char c=getchar();
    while(c < '0' || c > '9')
    {
        c=getchar();
    }
    while(c >= '0' && c <= '9')
    {
        r=(r<<3)+(r<<1)+c-'0';
        c=getchar();
    }
    *i=r;
}

int main()
{
    int n,k,maxn=0,zch,minn=1000000;
    long long outy=0,kcount=0;
    scanf("%d%d",&n,&k);
    unsigned int inp;

    for(int i=0 ; i<n ; ++i)
    {
        readUI(&inp);
        ++bucket[inp];
        if(maxn<inp){maxn=inp;}
        if(minn>inp){minn=inp;}
    }

    for(int i=maxn ; i>minn-1 ; --i)
    {
        if(bucket[i])
        {
            zch=bucket[i];

            if(zch>2)kcount+=((zch-3)*zch)/2+zch;
            if(zch==2)kcount++;
            for(int u=i-1 ; u>minn-1 ; --u)
            {
                if(bucket[u])
                {
                    if(u>=i-k)kcount+=zch*bucket[u];
                    else
                    {
                        outy+=(i-u)*bucket[u]*bucket[i];
                    }
                }
            }
        }
    }

    printf("%lld",k*kcount+outy);

    return 0;
}