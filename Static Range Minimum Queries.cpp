#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q, i, r, l, j, m;
    cin >> n >> q;
    m = log2(n);
    long long arr[m + 1][n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[0][i];
    }
    for (j = 1; j <= m; j++)
    {
        for (i = 1; i <= n - (1 << j) + 1; i++)
        {
            arr[j][i] = min(arr[j - 1][i], arr[j - 1][i + (1 << (j - 1))]);
        }
    }
    for (i = 0; i < q; i++)
    {
        cin >> l >> r;
        m = log2(r - l + 1);
        cout << min(arr[m][l], arr[m][r + 1 - (1 << m)]) << '\n';
    }
    return 0;
}