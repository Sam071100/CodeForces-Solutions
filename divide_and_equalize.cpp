//https://codeforces.com/problemset/problem/1881/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int test_case = 1; test_case <= t; test_case++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i];
            int x = 2;
            while (x * x <= temp)
            {
                while (temp % x == 0)
                {
                    mp[x]++;
                    temp /= x;
                }
                x++;
            }
            if (temp > 1) mp[temp]++;
        }

        int fl = 1;
        for (auto item : mp)
        {
            if (item.second % n != 0)
            {
                fl = 0;
                break;
            }
        }

        if (fl) cout << "Yes\n";
        else cout << "No\n";        
    }
    return 0;
}