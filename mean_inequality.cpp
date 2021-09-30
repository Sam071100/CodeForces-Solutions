//Adarsh Priyadarshi
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
void solve(){
    ll n;cin>>n;
    ll a;
    vector<ll> v;
    for(int i=0;i<2*n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
        cout<<v[j]<<" "<<v[n+j]<<" ";
    }
  cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
