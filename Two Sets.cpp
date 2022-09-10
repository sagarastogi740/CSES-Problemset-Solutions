#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f = 0;
    cin >> n;
    vector<int> a, b;
    if ((n * (n + 1)) % 4 == 0)
    {
        a.push_back(n);
        for (i = n - 1; i > 0; i -= 2)
        {
            switch (f)
            {
            case 0:
                b.push_back(i);
                b.push_back(i - 1);
                f = 1;
                break;
            case 1:
                a.push_back(i);
                a.push_back(i - 1);
                f = 0;
                break;
            default:;
            }
        }
        if (a[a.size() - 1] == 0)
            a.pop_back();
        if (b[b.size() - 1] == 0)
            b.pop_back();
        cout << "YES" << '\n';
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        cout << a.size() << '\n';
        for (auto t : a)
        {
            cout << t << ' ';
        }
        cout << '\n';
        cout << b.size() << '\n';
        for (auto t : b)
        {
            cout << t << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}