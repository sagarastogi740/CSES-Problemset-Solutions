#include <bits/stdc++.h>

using namespace std;

long long tree[4 * 200100];

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
        tree[node] = 0;
    }
}

void update(long long node, long long from, long long to, long long l, long long r, long long val)
{
    if (l > r)
        return;
    if (from == l && to == r)
    {
        tree[node] += val;
    }
    else
    {
        long long mid = (from + to) / 2;
        update(2 * node, from, mid, l, min(mid, r), val);
        update(2 * node + 1, mid + 1, to, max(mid + 1, l), r, val);
    }
}

long long get(long long node, long long from, long long to, long long pos)
{
    if (from == to)
        return tree[node];
    long long mid = (from + to) / 2;
    if (pos <= mid)
        return tree[node] + get(2 * node, from, mid, pos);
    return tree[node] + get(2 * node + 1, mid + 1, to, pos);
}

int main()
{
    long long n, q, i, j, a, b, c;
    cin >> n >> q;
    long long arr[n + 1];
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    build(arr, 1, n, 1);
    for (i = 1; i <= q; i++)
    {
        cin >> j;
        switch (j)
        {
        case 1:
            cin >> a >> b >> c;
            update(1, 1, n, a, b, c);
            break;
        case 2:
            cin >> b;
            cout << get(1, 1, n, b) << '\n';
            break;
        default:;
        }
    }
    return 0;
}