#include <bits/stdc++.h>     
using namespace std;
#define ll long long
ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}
void solve(){
    ll n; cin>>n;
    vector<ll> a(n+2,1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<ll> b(n+2,1);
    for(ll i=1;i<=n+1;i++){
        b[i]=lcm(a[i],a[i-1]);
    }
    for(ll i=1;i<=n;i++){
        if(__gcd(b[i],b[i+1])!=a[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()                                                                                
{  
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll t; cin>>t;
    while(t--){
        solve();
    }
}
