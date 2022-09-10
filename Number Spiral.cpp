#include <bits/stdc++.h>

using namespace std;

unsigned long long solve(unsigned long long row, unsigned long long col)
{
    unsigned long long ans = 0;
    (row >= col) ? (row % 2 == 0) ? ans = (row * row - col + 1) : ans = (row - 1) * (row - 1) + col : (col % 2 != 0) ? ans = col *col - row + 1
                                                                                                                     : ans = (col - 1) * (col - 1) + row;
    return ans;
}

int main()
{
    unsigned long long n, row, col;
    cin >> n;
    for (unsigned long long i = 0; i < n; i++)
    {
        cin >> row >> col;
        cout << solve(row, col) << endl;
    }
    return 0;
}