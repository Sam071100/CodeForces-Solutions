#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s = to_string(n);
        int ans = s.size();

        bool flag = false;
        int curr = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(!flag && s[i]=='5')
                flag=true;
            else if(flag && (s[i]=='2'||s[i]=='7'))
            {
                ans = min(ans, curr);
                break;
            }
            else
                curr++;
        }

        flag = false;
        curr = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(!flag && s[i]=='0')
                flag=true;
            else if(flag && (s[i]=='5'||s[i]=='0'))
            {
                ans = min(ans, curr);
                break;
            }
            else
                curr++;
        }

        cout<<ans<<"\n";
    }
}