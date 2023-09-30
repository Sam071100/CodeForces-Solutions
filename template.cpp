#include <bits/stdc++.h>
using namespace std;

// --------------------- Normal Shortcuts -------------------------
#define ff                          first
#define ss                          second
#define int                         long long 
#define ll                          long long 
#define ull                         unsigned long long
#define nl                          cout << '\n'
#define endl                        "\n"
#define fo(i,j,k,inc)               for(int i=j; i<k; i+=inc)   
#define rfo(i,j,k,inc)              for(int i=j; i>=k; i-=inc)      
#define rep(i,j)                    fo(i,0,j,1)
#define rrep(i,j)                   rfo(i,j,0,1)      
#define all(x)                      x.begin(), x.end()
#define rall(x)                     x.end(), x.begin()
#define sortAll(x)                  sort(all(x))
#define reverseAll(x)               reverse(all(x))
#define sum(x)                      accumulate(all(x), 0)
#define co(x)                       cout << x << endl
#define co2(x,y)                     cout << x << " " << y << endl
#define co3(x,y,z)                   cout << x << " " << y << " " << z << endl


// ---------------------- Interactive Problems ------------------------
#define cf                          cout.flush()



// --------------------- Print Shortcuts --------------------------
#define print_v(x)                  for (auto i:x) {cout << i << " ";} nl
#define print_vv(x)                 for (auto i:x) {for (auto j:i) { cout << j << " ";} nl;}
#define print_vp(x)                 for (auto i:x) {cout << i.ff << " " << i.ss << endl;}
#define print_mp(x)                 print_vp(x)
#define yes                         cout << "yes" << endl
#define Yes                         cout << "Yes" << endl       
#define YES                         cout << "YES" << endl
#define no                          cout << "no"  << endl  
#define No                          cout << "No"  << endl
#define NO                          cout << "NO"  << endl        



// --------------------- Initialization of DS ------------------------
#define pb                          push_back
#define ppb                          pop_back
#define pf                          push_front
#define ppf                          pop_front
#define mp                          make_pair
#define pii                         pair<int,int>
#define pll                         pair<ll,ll>
#define vi                          vector<int>
#define vl                          vector<ll>
#define vvi                         vector<vi>
#define vvl                         vector<vl>
#define vpii                        vector<pii>
#define vpll                        vector<pll>
#define mii                         map<int,int>
#define mll                         map<ll,ll>

#define pqb                         priority_queue<int>                     // max heap
#define pqs                         priority_queue<int,vi,greater<int>>     // min heap


// --------------------- Debugging -----------------------
#define deb(x)                      cout << #x << "=" << x << endl
#define deb2(x, y)                  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deba(x)                     for (auto i:x) {cout << i << " ";} nl


// --------------------- Yet to explore --------------------
#define mk(arr,n,type)              type *arr=new type[n]


// --------------------- Mathematics ---------------------
#define mod                         1000000007
#define inf                         1e18
#define PI                          3.1415926535897932384626
#define ps(x,y)                     fixed<<setprecision(y)<<x      // y precision after decimal point
#define ceil(x)                     (int)(ceil(x))
#define floor(x)                    (int)(floor(x))



// --------------------- Bit Manipulation --------------------------
#define countsb(x)                  __builtin_popcountll(x)
#define counttz(x)                  __builtin_ctzll(x)
#define countlz(x)                  __builtin_clz(x)
#define countlzll(x)                __builtin_clzll(x)
#define getBit(x,pos)               (x & (1<<pos))
#define setBit(x,pos)               (x | (1<<pos))
#define clearBit(x,pos)             (x & (~(1<<pos))) 
#define toggleBit(x,pos)            (x ^ (1<<pos))
#define msb(x)                      (1<<((int)log2(x)))   // most significant bit (leftmost set bit)
#define lsb(x)                      (x & ~(x-1))          // least significant bit (rightmost set bit)



// ---------------------- Templates ------------------------

// Call by reference is used in x 
template<typename T, typename U> 
static inline void amin(T &x, U y) { if (y < x) x = y; } 

// call by reference is used in x 
template<typename T, typename U> 
static inline void amax(T &x, U y) { if (x < y) x = y; } 






// explore factorial, ncr, npr, etc

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}


int gcd(int a, int b);
int lcm(int a, int b);

#define MAX 1000001
bool isPrime[MAX];

void sieve(){
    // bool isPrime[MAX];
    for (int i = 0; i < MAX; i++) isPrime[i]=true;
    isPrime[0]=false; isPrime[1]=false;

    for (int i=2; i*i<MAX; i++){
        if (isPrime[i]){
            for (int j=i*i; j<MAX; j+=i){
                isPrime[j] = false;
            }
        }
    }
    // static vector<int> primes;
    // primes.push_back(2);
    // for (int i=3; i<MAX; i+=2){
    //     if (isPrime[i]) primes.push_back(i);
    // }
    // return &primes;
}

void solve(){
    int n;
    cin>>n;

    vi a(n);
    rep(i,n) cin>>a[i];
    
    rep(i,n){
        long double x = sqrt(a[i]);
        if ((int) x == x and isPrime[(int) x]) YES;
        else NO;
    }
    
    
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    int t=1;
    // cin>>t;
    while (t--){
        solve();
    }

    return 0;
}




int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}
