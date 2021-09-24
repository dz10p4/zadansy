#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g=0,bs,bn=0,gg;


    
    for(int i=0 ; i<1000000000 ; ++i)
    {
        srand(g);
        gg=rand();
        if(gg>bn){bn=gg;bs=g;}

        g++;

    }

    printf("%d %d", bs,bn);


    return 0;
}