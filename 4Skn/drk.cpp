#include <iostream>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <limits.h>
#define pb push_back
using namespace std;

struct Node
{
    long long w = -1;
};

int main()
{
    int k, q, wyn = 0, cter = 1;
    long long n, x, y;
    scanf("%lld%d%d", &n, &k, &q);
    map<long long, Node> an1, an2;
    for (int i = 0; i < q; i++)
    {
        scanf("%lld%lld", &x, &y);
        if (x < y)
            swap(x, y);
        an1[x].w = 0;
        an2[y].w = 0;
        while (1)
        {
            if (x != 1)
            {
                if (x % k > 1)
                    x += k - (x % k);
                x /= k;
                an1[x].w = cter;
            }
            
            if (an2[x].w != -1)

                break;

            if (y != 1)
            {
                if (y % k > 1)
                    y += k - (y % k);
                y /= k;
                an2[y].w = cter;
            }
            
            if (an1[y].w != -1)

                break;

            cter++;
        }

        printf("%lld\n", an1[x].w + an2[y].w);
        an1.clear();
        an2.clear();

        wyn = 0, cter = 1;
    }

    return 0;
}