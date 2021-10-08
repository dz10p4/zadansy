#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,d,p,k;

    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&p,&k);

    if(a<0){a*=-1;b*=-1;c*=-1;d*=-1;}

    float shoot=(p+k)/2;

    while(a*shoot*shoot*shoot+b*shoot*shoot+c*shoot+d!=0)
    {
        if(a*shoot*shoot*shoot+b*shoot*shoot+c*shoot+d>0)
        {
            k=shoot;
            shoot=(p+k)/2;
        }
        else 
        {
            p=shoot;
            shoot=(p+k)/2;
        }
    }

    printf("%.4f",shoot);

    return 0;
}

