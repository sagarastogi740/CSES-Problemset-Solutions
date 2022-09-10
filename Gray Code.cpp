#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        cout << (1 && (i & (1 << (n - 1))));
        for (int j = n - 1; j > 0; j--)
        {
            cout << ((1 && (i & (1 << j))) ^ (1 && (i & (1 << (j - 1)))));
        }
        cout << '\n';
    }
    return 0;
}