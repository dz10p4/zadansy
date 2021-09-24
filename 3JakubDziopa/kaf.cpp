#include <stdio.h>
using namespace std;
int mod=1000000007;
int wyn=1;


int main()
{
    int n;
    scanf("%d",&n);
    if(n%2){printf("0");return 0;}

    while(n>=4)
    {
        wyn=(wyn*9+2)%mod;
        n-=4;
    }
    if(n==2)
    {
        wyn=(wyn*3)%mod;
    }

    printf("%d",wyn);


    return 0;
}
