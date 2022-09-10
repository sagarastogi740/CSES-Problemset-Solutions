#include <bits/stdc++.h>

using namespace std;

long long tree[4 * 200100];
long long n;

void build(long long *arr, long long from, long long to, long long node)
{
    if (from == to)
    {
        tree[node] = arr[from];
    }
    else
    {
        long long mid = (from + to) / 2;
        build(arr, from, mid, 2 * node);
        build(arr, mid + 1, to, 2 * node + 1);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

long long sum(long long node, long long from, long long to, long long l, long long r)
{
    if (l > r)
        return 0;
    if (from == l && to == r)
        return tree[node];
    long long mid = (from + to) / 2;
    return sum(2 * node, from, mid, l, min(mid, r)) + sum(2 * node + 1, mid + 1, to, max(l, mid + 1), r);
}

void update(long long node, long long from, long long to, long long pos, long long val)
{
    if (from == to)
    {
        tree[node] = val;
    }
    else
    {
        long long mid = (from + to) / 2;
        if (pos <= mid)
            update(2 * node, from, mid, pos, val);
        else
            update(2 * node + 1, mid + 1, to, pos, val);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

int main()
{
    long long q, i, t, a, b;
    cin >> n >> q;
    long long arr[n + 1];
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    build(arr, 1, n, 1);
    for (i = 1; i <= q; i++)
    {
        cin >> t >> a >> b;
        switch (t)
        {
        case 1:
            update(1, 1, n, a, b);
            break;
        case 2:
            cout << sum(1, 1, n, a, b) << '\n';
            break;
        default:;
        }
    }
    return 0;
}