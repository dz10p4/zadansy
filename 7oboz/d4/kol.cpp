#include <bits/stdc++.h>
using namespace std;

const int N = 65536;

int tree[2 * N][2], wynik;

void push(int w)
{
    int p = tree[w][1];
    tree[w * 2][0] += p;
    tree[w * 2 + 1][0] += p;
    tree[w * 2][1] += p;
    tree[w * 2 + 1][1] += p;
    tree[w][1] = 0;
}

void add(int w, int p, int k, int x, int y, int val)
{
    if (p > y || k < x)
        return;
    if (x <= p && y >= k)
    {
        tree[w][0] += val;
        tree[w][1] += val;
        return;
    }
    push(w);
    add(w * 2, p, (p + k) / 2, x, y, val);
    add(w * 2 + 1, (p + k) / 2 + 1, k, x, y, val);
    tree[w][0] = max(tree[w * 2][0], tree[w * 2 + 1][0]);
}

void query(int w, int p, int k, int x, int y)
{
    if (p > y || k < x)
        return;
    if (x <= p && y >= k)
    {
        wynik = max(tree[w][0], wynik);
        return;
    }
    push(w);
    query(w * 2, p, (p + k) / 2, x, y);
    query(w * 2 + 1, (p + k) / 2 + 1, k, x, y);
    //tree[w][0]=tree[w*2][0]+tree[w*2+1][0];
}

int main()
{
    int n, m, z, p, k, l;
    scanf("%d%d%d", &n, &m, &z);

    for (int i = 0; i < z; ++i)
    {
        scanf("%d%d%d", &p, &k, &l);
        wynik = 0;
        query(1, 0, N - 1, p, k - 1);
        if (wynik + l <= m)
        {
            add(1, 0, N - 1, p, k - 1, l);
            printf("T\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}