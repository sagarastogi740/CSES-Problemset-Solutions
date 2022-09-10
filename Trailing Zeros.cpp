#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    while (n)
    {
        n /= 5;
        sum += n;
    }
    cout << sum << '\n';
    return 0;
}