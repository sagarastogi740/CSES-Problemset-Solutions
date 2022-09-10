#include <bits/stdc++.h>
#define M (1000000007)
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n + 1];
    arr[0] = 1;
    for (i = 1; i <= n; i++)
        arr[i] = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= min(i, 6); j++)
        {
            arr[i] = (arr[i] + arr[i - j]) % M;
        }
    }
    cout << arr[n] << endl;
    return 0;
}