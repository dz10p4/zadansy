#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,jer=0,res;
    scanf("%d\n",&n);
    char C[n];
    scanf("%s",C);
    char sp=C[0];
    for(int i=1 ; i<n ; ++i)
    {
        if(C[jer]!=C[i]){if(jer!=0)i--;jer=0;}
        else jer++;
        if(i+1==n)res=i-jer+1;
    }
    printf("%d",res);
    return 0;
}