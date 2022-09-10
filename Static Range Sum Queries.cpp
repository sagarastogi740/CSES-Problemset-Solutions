#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q, i, a, b;
    cin >> n >> q;
    long long arr[n + 1];
    arr[0] = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << '\n';
    }
    return 0;
}