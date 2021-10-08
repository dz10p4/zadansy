#include <bits/stdc++.h>
#define tabclear {fill(ct,ct+29,0);}
using namespace std;

int tab[1000001],ct[29];

int ctct()
{
    int mx=0;mi=__INT_MAX__;

    for(int i=0 ; i<28 ; ++i)
    {
        mx=max(mx,ct[i]);
        mi=min(mi,ct[i]);
    }

    return mx-mi;
}


int main()
{
    int n,wyn=0,pawel=0;
    char c;
    scanf("%d\n",&n);
    if(n==1){printf("0");return 0;}

    for(int i=0 ; i<n ; ++i)
    {
        c=getchar_unlocked();
        ct[c-'a'+1]++;
        tab[i]=c-'a'+1;
    }

    //for(int i=0 ; i<n ; ++i)printf("%d",tab[i]);

    wyn=max(wyn,ctct());
    tabclear
    while(pawel<n-1)
    {
        for(int i=pawel ; i<n ; ++i)
        {
            


        }



        ++pawel;
    }









    return 0;
}
