#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), copy;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    copy = v;
    sort(all(copy));
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (copy[i] != v[i])
        {
            auto it = find(v.begin() + i, v.end(), copy[i]);
            int x = it - v.begin() - i;
            ans.push_back({i + 1, it - v.begin() + 1, x});
            rotate(v.begin() + i, v.begin() + x + i, v.begin() + x + i + 1);
        }
    }
    cout << ans.size() << '\n';
    for (auto it : ans)
        cout << it[0] << ' ' << it[1] << ' ' << it[2] << '\n';
}

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}