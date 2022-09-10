#include <bits/stdc++.h>

using namespace std;

void TOH(int n, int left, int middle, int right)
{
    if (n == 0)
        return;
    TOH(n - 1, left, right, middle);
    cout << left << ' ' << right << '\n';
    TOH(n - 1, middle, left, right);
}
int main()
{
    int t;
    cin >> t;
    cout << (1 << t) - 1 << '\n';
    TOH(t, 1, 2, 3);
    return 0;
}