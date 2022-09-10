#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, tmp, curr_sum = INT_MIN, max_sum = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        curr_sum = max(curr_sum + tmp, tmp);
        max_sum = max(curr_sum, max_sum);
    }
    cout << max_sum << endl;
}

int main()
{
    solve();
    return 0;
}