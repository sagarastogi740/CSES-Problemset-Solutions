#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    long long sum = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = (sum << 1) % MOD;
    }
    cout << sum << '\n';
    return 0;
}