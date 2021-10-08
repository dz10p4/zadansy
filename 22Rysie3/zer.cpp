#include <stdio.h>
using namespace std;

int main()
{
    int n,piona=5,wyn=0;

    scanf("%d",&n);

    while(n>piona)
    {
        wyn+=n/piona;
        piona*=5;
    }

    printf("%d",wyn);

    return 0;
}