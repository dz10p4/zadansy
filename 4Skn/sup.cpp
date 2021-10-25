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
#include <stack>
#define pb push_back
using namespace std;

int T[101], D[101], n, cter, val;
stack<int> q;
vector<int> A;
void wej(int w)
{
    val = T[w];
    D[w] = cter;
    for (int i = w + 1; i <= n; ++i)
    {
        cter++;
        if (T[i] > val)
        {
            q.push(w);
            wej(i);
        }
        cter--;
    }
    if (!q.empty())
    {
        D[q.top()] = D[w];
        q.pop();
    }
}

int main()
{
    int bst = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &T[i]);
    }

    for (int i = 1; i <= n; ++i)
    {
        cter = 1;
        if (!D[i])
            wej(i);
    }

    for (int i = 1; i <= n; ++i)
    {
        bst = max(bst, D[i]);
    }

    for (int i = 1; i <= n; ++i)
    {
        if (D[i] == bst)
            A.pb(T[i]);
    }

    sort(A.begin(), A.end());

    printf("%ld\n", A.size());

    for (auto I : A)
        printf("%d ", I);

    return 0;
}