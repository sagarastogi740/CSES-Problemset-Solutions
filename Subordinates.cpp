#include <bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>> &tree, vector<int> &sum, int root)
{
    if (tree[root].size() == 0)
    {
        sum[root] = 0;
        return 1;
    }
    int cnt = 0;
    for (auto i : tree[root])
    {
        cnt += dfs(tree, sum, i);
    }
    sum[root] = cnt;
    return cnt + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, temp;
    cin >> n;
    vector<int> sum(n);
    vector<vector<int>> tree(n);
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        tree[temp - 1].push_back(i);
    }
    dfs(tree, sum, 0);
    for (int i = 0; i < n; i++)
        cout << sum[i] << ' ';
    return 0;
}