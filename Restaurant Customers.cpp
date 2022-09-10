#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a, d, cnt = 0, max_cnt = 0;
    cin >> n;
    vector<pair<int, char>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> d;
        v.push_back(make_pair(a, 'a'));
        v.push_back(make_pair(d, 'd'));
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        if (i.second == 'a')
            cnt++;
        else
            cnt--;
        max_cnt = max(cnt, max_cnt);
    }
    cout << max_cnt << endl;
}

int main()
{
    solve();
    return 0;
}