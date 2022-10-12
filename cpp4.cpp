#include <bits/stdc++.h>     
using namespace std;
#define ll long long
#define f first
#define s second
int main()                                                                                
{  
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll n; cin>>n;
    vector<ll> track(n+5,0),sum(n+5,0);
    vector<pair<ll,pair<ll,ll>>> trav; 
    vector<ll> pref(n+5,0),dp(n+5,0);
    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        sum[i]=sum[i-1]+i; trav.push_back({x-i,{i,0}});
        dp[i]=min(dp[i-1]+1,x); pref[i]=pref[i-1]+dp[i];    
    }
    ll q; cin>>q;
    vector<ll> ans(q+5,0);  
    for(ll i=1;i<=q;i++){
        ll p,x; cin>>p>>x; x=min(dp[p-1]+1,x); 
        trav.push_back({x-p,{p,i}});
    }
    set<ll> found; found.insert(n+1);  
    sort(trav.begin(),trav.end()); 
    for(auto it:trav){
        if(it.s.s){
            ll r=*found.upper_bound(it.s.f);
            ans[it.s.s]=pref[it.s.f-1]+track[r]+sum[r-it.s.f]+(it.f+it.s.f-1)*(r-it.s.f);
        }
        else{
            ll r=*found.lower_bound(it.s.f); found.insert(it.s.f);
            track[it.s.f]=track[r]+sum[r-it.s.f]+(it.f+it.s.f-1)*(r-it.s.f);
        }
    }
    for(ll i=1;i<=q;i++){
        cout<<ans[i]<<"\n";
    }
}  
