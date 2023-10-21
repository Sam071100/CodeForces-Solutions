#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,m,g;
    float a;
    cin>>n>>m;
    if(m==0)
    {
        g=1;
    }
    else if(n%2==0)
    {
        if(m<=n/2)
        {
            g=m;
        }
        else
        {
            g=n-m;
        }
    }
    else
    {
        a=n;
        if(m<=floor(a/2))
        {
            g=m;
        }
        else if(m==ceil(a/2))
        {
            g=floor(a/2);
        }
        else
        {
            g=a-m;
        }
    }
    cout<<g;
    return 0;
}