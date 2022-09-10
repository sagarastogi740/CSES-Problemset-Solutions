#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n, cnt = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
            cnt++;
    }
    cout << cnt << '\n';
}

int main()
{
    solve();
    return 0;
}