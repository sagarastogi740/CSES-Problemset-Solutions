#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x, cnt = 0, start = 0, end;
    cin >> n >> x;
    end = n - 1;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        if (start < end)
        {
            if ((p[start] + p[end]) <= x)
            {
                cnt++;
                start++;
                end--;
            }
            else
            {
                cnt++;
                end--;
            }
        }
        else if (start == end)
        {
            cnt++;
            break;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
}

int main()
{
    solve();
    return 0;
}