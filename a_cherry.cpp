//Adarsh Priyadarshi 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
void solve(){
    int n;cin>>n;
    vector<ll> v;
    int a;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int j=0;j<n-1;j++){
        ans=max(ans,v[j]*v[j+1]);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
