#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<char> s;
        for (int i = 0; i < 2; i++)
        {
            string p;
            cin >> p;
            char temp = p[0];
            s.insert(temp);
            temp = p[1];
            s.insert(temp);
        }
 
        cout << s.size() - 1 << endl;
    }
    return 0;
}
