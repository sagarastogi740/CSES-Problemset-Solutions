#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x, tmp, start = 0, end;
    cin >> n >> x;
    end = n - 1;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vp.push_back(make_pair(tmp, i + 1));
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++)
    {
        if (start < end)
        {
            if ((vp[start].first + vp[end].first) == x)
            {
                cout << vp[start].second << ' ' << vp[end].second << endl;
                break;
            }
            else if ((vp[start].first + vp[end].first) < x)
            {
                start++;
            }
            else if ((vp[start].first + vp[end].first) > x)
            {
                end--;
            }
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}