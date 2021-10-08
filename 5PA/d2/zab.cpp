#include <bits/stdc++.h>
using namespace std;

int tab1[28],tab2[28];

int main()
{

    int n;

    char c;

    scanf("%d",&n);
    getchar_unlocked();
    for(int i=0 ; i<n ; ++i)
    {
        c=getchar_unlocked();
        tab1[c-'a']++;
    }
    getchar_unlocked();
    for(int i=0 ; i<n ; ++i)
    {
        c=getchar_unlocked();
        tab2[c-'a']++;
    }
    getchar_unlocked();

    for(int i=0 ; i<27 ; ++i)
    {
        if(tab1[i]!=tab2[i]){printf("NIE");return 0;}
    }

    printf("TAK");

    return 0;

}