#include <bits/stdc++.h>
#define M (1000000007)
using namespace std;

int main()
{
    int n;
    bool flag = true;
    char ch;
    cin >> n;
    int grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ch;
            grid[i][j] = (int)ch;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((grid[i][0] == (int)'.') && flag)
        {
            grid[i][0] = 1;
        }
        else
        {
            flag = false;
            grid[i][0] = 0;
        }
    }
    if (grid[0][0] == 1)
        flag = true;
    for (int i = 1; i < n; i++)
    {
        if ((grid[0][i] == (int)'.') && flag)
        {
            grid[0][i] = 1;
        }
        else
        {
            flag = false;
            grid[0][i] = 0;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (grid[i][j] == (int)'*')
            {
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = (grid[i - 1][j] + grid[i][j - 1]) % M;
            }
        }
    }
    cout << grid[n - 1][n - 1] << endl;
    return 0;
}