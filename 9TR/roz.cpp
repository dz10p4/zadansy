#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    long long cter=0,pos,pp,ss,bb,bbb;
    long long k;
    int t;

    vector<long long> fib;
    vector<long long>::iterator bruh; 
    fib.pb(0);
    fib.pb(1);
    fib.pb(1);

    for(int i=3 ; i<87 ; i++)fib.pb(fib[i-1]+fib[i-2]);

    scanf("%d",&t);

    for(int i=0 ; i<t ; ++i)
    {

        scanf("%lld",&k);

        while(k!=0)
        {
            bruh=upper_bound(fib.begin(),fib.end(),abs(k));

            pos=bruh-fib.begin();

            pp=abs(k-fib[pos-1]);
            ss=abs(k-fib[pos]);

            bb=fib[pos-1];
            bbb=fib[pos];

            if(k>0)
            {
                if(pp>ss)k=k-bbb;
                else k-=bb;
            }
            else if(k<0)
            {
                if(pp>ss)k+=bbb;
                else k+=bb;
            }
            

            cter++;
        }



        printf("%lld\n",cter);
        cter=0;
    }


    return 0;
}