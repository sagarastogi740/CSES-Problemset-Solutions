#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (long long int i = 5; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << "3 1 4 2 ";
    for (long long int i = 6; i <= n; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}