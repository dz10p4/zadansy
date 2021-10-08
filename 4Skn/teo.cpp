#include <bits/stdc++.h>

using namespace std;
long long p;
long long fastpotenging(int a,int pds)
{

    if(pds==1)return a;
    if(pds==0)return 1;
    if(pds%2==0)
    {
        long long r=fastpotenging(a,pds/2);
        return (r*r)%p;
    }
    else 
    {

        long long r=fastpotenging(a,pds-1);
        return (a*r)%p;
    }


}



int main()
{
    long long a,b,c,d;

    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&p);

    long long com1,com2,com3,com4;

    com1=__gcd(a,d);

    a/=com1;
    d/=com1;

    com2=__gcd(a,c);
    
    a/=com2;
    c/=com2;

    com3=__gcd(b,d);

    b/=com3;
    d/=com3;

    com4=__gcd(b,c);

    b/=com4;
    c/=com4;

    a%=p;
    b%=p;
    c%=p;
    d%=p;

    a=(a*b)%p;
    a=(a*fastpotenging(c,p-2))%p;
    a=(a*fastpotenging(d,p-2))%p;



    printf("%lld",a);





    return 0;
}