#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, div, mn = INT_MAX, res = 0;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            mn = min(mn, v[i]);
        }

        div = (2 * mn) - 1;
        // cout<<div<<endl;

        for (int i = 0; i < n; i++)
        {
            if (div == 1)
            {
                res = res + v[i] - 1;
            }
            else
            {
                res = res + (v[i] / div) - 1;
                if (v[i] % div)
                {
                    res++;
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}