#include <iostream>

using namespace std;

int main()
{
    unsigned int n, t, i;
    cin >> n;
    int arr[n + 1];
    for (i = 0; i <= n; i++)
    {
        arr[i] = 0;
    }
    for (i = 0; i < n - 1; i++)
    {
        cin >> t;
        arr[t]++;
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}