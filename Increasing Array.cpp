#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, cnt = 0;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            cnt += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << cnt << endl;
    return 0;
}