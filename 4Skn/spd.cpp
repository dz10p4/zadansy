#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,m;

    scanf("%le%le",&n,&m);

    m/=2;
    m*=-1;

    double z=n+m;

    z/=3;

    double y=(n-4*z)/2;
    double x=z+y;

    

    printf("%.2f",z*x);



    return 0;
}