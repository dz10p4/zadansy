#include <bits/stdc++.h>
using namespace std;

bool dum[11];

pair<int,int> tab[11];

int outcome=0,n;

void findbest(int a)
{
    int fw=__INT_MAX__,fi=2137;
    for(int i=0 ; i<n ; ++i)
    {
        if(i==a||dum[i])continue;
        
        if(abs(tab[i].first-tab[a].first)+abs(tab[i].second-tab[a].second)<fw){fi=i;fw=abs(tab[i].first-tab[a].first)+abs(tab[i].second-tab[a].second);}
    }

    if(fi!=2137){dum[fi]=1;
    outcome+=fw;}

    if(fi!=2137)findbest(fi);

}


int main()
{
    int inp1,inp2,fi=0,fw=__INT_MAX__;
    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&tab[i].first,&tab[i].second);

       
    }

    int boutcome=__INT_MAX__;
    
    for(int i=0 ; i<n ; ++i)
    {
        fi=i;
        dum[fi]=1;
        findbest(fi);

        boutcome=min(outcome,boutcome);
        outcome=0;
        fill(dum,dum+10,0);
    }


    printf("%d",boutcome);


    return 0;
}