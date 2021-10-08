#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int>mapa;

int main()
{
    int n,inp;

    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);
        mapa[inp]++;
    }

    for(int i=0 ; i<1000000000 ; ++i)
    {
        if(mapa[i]%2){printf("%d",i);return 0;}

    }



    return 0;
}