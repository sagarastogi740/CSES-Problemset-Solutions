#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, j;
    cin >> n >> x;
    int arr[n];
    uint32_t dp[x + 1];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    dp[0] = 0;
    for (i = 1; i <= x; i++)
        dp[i] = INT_MAX;
    for (i = 0; i < n; i++)
    {
        for (j = arr[i]; j <= x; j++)
        {
            dp[j] = min(dp[j], (dp[j - arr[i]] + 1));
        }
    }
    if (dp[x] == INT_MAX)
        cout << -1 << '\n';
    else
        cout << dp[x] << '\n';
    return 0;
}