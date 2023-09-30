// Problem Link: https://codeforces.com/contest/200/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    float a, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        c = c + a;
    }
    cout << c / n;
    // your code goes here
    return 0;
}
