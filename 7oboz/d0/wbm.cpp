#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
using namespace std;

int main()
{
    long long n,p1,p2;
    scanf("%lld",&n);
    n-=n%2;
    n++;
    
    n++;
    p1=n*3;
    p2=(n/2);
    
    printf("%lld",p1+p2);



    return 0;
}