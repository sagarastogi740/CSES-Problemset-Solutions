#include <bits/stdc++.h>
#define M (1000000007)
using namespace std;

int main()
{
    unsigned int n, x;
    cin >> n >> x;
    unsigned int coins[n + 1];
    unsigned int arr[x + 1];
    for (unsigned int i = 1; i <= n; i++)
    {
        cin >> coins[i];
    }
    arr[0] = 1;
    for (unsigned int i = 1; i <= x; i++)
    {
        arr[i] = 0;
    }
    for (unsigned int i = 1; i <= n; i++)
    {
        for (unsigned int j = coins[i]; j <= x; j++)
        {
            arr[j] = (arr[j] + arr[j - coins[i]]) % M;
        }
    }
    cout << arr[x] << endl;
    return 0;
}