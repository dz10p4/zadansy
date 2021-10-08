#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    printf("1000000 1000\n");

    for(int i=0 ; i<1000000 ; ++i)
    {
        printf("%d\n",rand()%10000);
    }

    return 0;
}