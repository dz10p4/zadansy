#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    long long liczba;
    int cyf;
    scanf("%lld",&liczba);

    while(liczba>=1)
    {
        v.push_back((liczba%5)*2);
        liczba/=5;
    }

    for(int i=v.size()-1 ; i>=0 ; --i)printf("%d",v[i]);

    return 0;
}