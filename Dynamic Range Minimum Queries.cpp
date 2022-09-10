#include <bits/stdc++.h>

using namespace std;

int tree[4 * 200100];
int n;

void build(int *arr, int from, int to, int node)
{
    if (from == to)
    {
        tree[node] = arr[from];
    }
    else
    {
        int mid = (from + to) / 2;
        build(arr, from, mid, 2 * node);
        build(arr, mid + 1, to, 2 * node + 1);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

int sum(int node, int from, int to, int l, int r)
{
    if (l > r)
        return INT32_MAX;
    if (from == l && to == r)
        return tree[node];
    int mid = (from + to) / 2;
    return min(sum(2 * node, from, mid, l, min(mid, r)), sum(2 * node + 1, mid + 1, to, max(l, mid + 1), r));
}

void update(int node, int from, int to, int pos, int val)
{
    if (from == to)
    {
        tree[node] = val;
    }
    else
    {
        int mid = (from + to) / 2;
        if (pos <= mid)
            update(2 * node, from, mid, pos, val);
        else
            update(2 * node + 1, mid + 1, to, pos, val);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

int main()
{
    int q, i, t, a, b;
    cin >> n >> q;
    int arr[n + 1];
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