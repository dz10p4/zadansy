#include <bits/stdc++.h>
using namespace std;

bitset<20> bitt;

int main()
{
    bitt.set(0);
    bitt[0]=0;
    short n;
    char c1,c2;
    int x1,x2,chk=0;
    scanf("%d",&n);
    getchar_unlocked();
    for(int i=0 ; i<n ; ++i)
    {
        c1=getchar_unlocked();
        c2=getchar_unlocked();
        getchar_unlocked();

        c1-='0';
        c2-='A';
        
        x1=c1-1;
        x2=c2;
        chk=bitt[x1*3+x2];
        if(c1==4&&chk==1)x1++;
        bitt[x1*3+x2]=1;
        chk=0;
        cout<<"macias";
    }

    // if(bitt.count()==18)printf("TAK");
    // else printf("NIE");
    printf("%d",bitt.count());
    //cout<<bitt[4];
    return 0;
}