#include <bits/stdc++.h>
using namespace std;

char tab[2001][2001];

int main()
{
    int n,m,t,inp1,inp2;
    char kowski;
    int transk[2001],transw[2001];

    for(int i=0 ; i<2000 ; ++i)
    {
        transk[i]=i;
        transw[i]=i;
    }

    scanf("%d%d%d",&n,&m,&t);
    getchar_unlocked();
    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            kowski=getchar_unlocked();
            tab[i][u]=kowski;

        }
        getchar_unlocked();
    }
    
    for(int i=0 ; i<t ; ++i)
    {
        scanf("%c %d%d",&kowski,&inp1,&inp2);
        if(kowski=='K')swap(transk[inp1],transk[inp2]);
        else {swap(transw[inp1],transw[inp2]);}
        getchar_unlocked();
    }

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=m ; ++u)
        {
            putchar_unlocked(tab[transw[i]][transk[u]]);
        }
        printf("\n");


    }

    return 0;
}