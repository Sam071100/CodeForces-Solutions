

    // Problem: C. To Become Max
    // Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor Institute
    // URL: https://codeforces.com/contest/1856/problem/C
    // Memory Limit: 256 MB
    // Time Limit: 2000 ms
    // 
    // Powered by CP Editor (https://cpeditor.org)
     
    //Template from : https://github.com/purple-satan-weed/CP-Template
     
    #pragma GCC optimize("O3,unroll-loops")
    #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
    #include <bits/stdc++.h>
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
    #define gcj "Case #"
    #define adj_list vector<vi>
    #define endl "\n"
    #define spc " "
    #define INF_INT 2e9
    #define INF_LL 2e18
    #define matmax 25
    #define mod 1000000007
    #define mp make_pair
    #define pb push_back
    #define pi pair<int, int>
    #define pip pair<int,pi>
    #define pl pair<ll,ll>
    #define plp pair<ll,pl>
    #define vi vector<int>
    #define vl vector<ll>
    #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #define all(x) x.begin(), x.end()
    #define ins insert
    #define lb lower_bound  // First ele NOT LESS than val
    #define ub upper_bound  // First ele GREATER than val
    #define deb cout<<"Bruh"<<endl;
    #define sz(q) (int)(q.size())
     
    using namespace std;
    using namespace __gnu_pbds;
    typedef long long int ll;
    typedef long int li;
     
    #define ook order_of_key  // Number of elements STRICTLY smaller than X
    #define fbo find_by_order  //  *ITERATOR* pointing to the kth element (0 order)
     
    #define fo(a,b) for(auto i=a;i<b;++i)
    #define nfo(a,b) for(auto i=a;i>=b;--i)
    #define jfo(a,b) for(auto j=a;j<b;++j)
    #define njfo(a,b) for(auto j=a;j>=b;--j)
    #define tt ll t; cin>>t; while(t--)
     
    template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
     
    template<typename T>
    ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
    template<typename T>
    ostream& operator<<(ostream& os, set<T>& set_vals) { for (auto& a : set_vals) cout << a << ' '; return os; }
    template<typename T>
    istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }
    template<typename T>
    void print(T a) { cout << a << endl; }
    template<typename T, typename... Args>
    void print(T a, Args... b) { cout << a << " "; print(b...); } 
    template<typename T>
    void _debug(T a) {
        if (typeid(a) == typeid(char)) cout << '\'';
        if (typeid(a) == typeid(string)) cout << '\"';
        cout << a;
        if (typeid(a) == typeid(char)) cout << '\'';
        if (typeid(a) == typeid(string)) cout << '\"';
        cout << "]" << endl;
    }
    template<typename T, typename... Args>
    void _debug(T a, Args... b) {
        if (typeid(a) == typeid(char)) cout << '\'';
        if (typeid(a) == typeid(string)) cout << '\"';
        cout << a;
        if (typeid(a) == typeid(char)) cout << '\'';
        if (typeid(a) == typeid(string)) cout << '\"';
        cout << ",\t";
        _debug(b...);
    }
    template<typename... Args>
    void debug(Args... b) { cout << '['; _debug(b...); }
     
    void swap(ll &x,ll &y){
    	ll temp = y;
    	y = x;
    	x = temp;
    }
     
    ll powa(ll a, ll b, ll m = mod){
    	if (b == 0)
    		return 1ll;
    	else if (b == 1)
    		return a;
    	else
    	{
    		ll x = powa(a, b/2, m);
    		x *= x;
    		// x %= m;
    		if (b%2)
    		{
    			x *= a;
    			// x %= m;
    		}
    		return x;
    	}
    }
     
    string dectobin(ll n)
    {
        string s = bitset<64> (n).to_string();
        const auto loc1 = s.find('1');
        if(loc1 != string::npos)
            return s.substr(loc1);
        return "0";
    }
     
    vector<bool> sieve(ll n){
    	vector<bool> prims(n+1,1);
    	for(ll p = 2; p*p <= n; ++p){
    		if(prims[p]){
    			for(ll i = p*p; i <= n; i+=p) prims[i] = 0;
    		}
    	}
    	
    	return prims;
    }
     
    struct DSU
    {
        int n;
        vi p;
        DSU(int N)
        {
            n = N;
            p.assign(n + 1,-1);
            fo(0,n+1) p[i] = i;
        }
        int find_parent(int i)
        {
            if (p[i] == i)return i;
            return p[i] = find_parent(p[i]);
        }
        void merge(int a,int b)
        {
            a = find_parent(a),b = find_parent(b);
            if (a != b)p[b] = a;
        }
    };
     
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());
     
    int randInt() {
    	return rng() % INT_MAX;
    }
     
    ll randLL() {
    	return rng64() % LLONG_MAX;
    }
     
    #define int ll
     
    bool checker(int check,vi a, int k){
    	int n = sz(a);
    	int sum = 0;
    	int x = check;
    	bool flag = 0;
    	
    	fo(0,n-1){
    		if(a[i] >= check) return 1;
    		x = check;
    		flag = 0;
    		sum = check - a[i];
    		jfo(i+1,n){
    			x--;
    			if(a[j] >= x){
    				flag = 1;
    				break;
    			}
    			else{
    				sum+= (x-a[j]);
    			}
    		}
    		if(sum <= k && flag) return 1;
    	}
    	return 0;
    }
     
    int32_t main(){
    	fastio
    	tt{
    		int n;
    		cin>>n;
    		
    		int k;
    		cin>>k;
    		
    		vi a(n);
    		cin>>a;
    		
    		int maxy = 0;
    		fo(0,n) maxy = max(maxy,a[i]);
    		
    		int lo = 1, hi = 1e10;
    		
    		while(hi - lo > 1){
    			int mid = (hi + lo)/2;
    			if(checker(mid,a,k)) lo = mid;
    			else hi = mid;
    		}
    		
    		if(checker(hi,a,k)) cout<<max(hi,maxy)<<endl;
    		else cout<<max(lo,maxy)<<endl;		
    	}
    }