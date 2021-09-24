#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{

    int n,m,hm=0,bul;
    char kowski,pk='B';

    scanf("%d%d\n",&n,&m);

    for(int i=0 ; i<n ; ++i)
    {
        kowski=getchar_unlocked();
        getchar_unlocked();
        getchar_unlocked();
        
        if(kowski==pk)hm++;
        else 
        {
            v.push_back(hm);
            hm=1;


        }
        pk=kowski;
    }
    v.push_back(hm);

    return 0;
}