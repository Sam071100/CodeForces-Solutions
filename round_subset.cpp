// https://codeforces.com/problemset/problem/837/D
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>
#include <assert.h>
#include <array>
#include <random>
#include <chrono>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dadsadasda;

#define ri(a) dadsadasda=scanf("%d", &a)
#define rii(a,b) dadsadasda=scanf("%d %d", &a, &b)
#define riii(a,b,c) dadsadasda=scanf("%d %d %d", &a, &b, &c)
#define rl(a) dadsadasda=scanf("%lld", &a)
#define rll(a,b) dadsadasda=scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ALL(s) s.begin(),s.end()
#define SZ(s) (int)s.size()

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 203; // CAMBIAR ESTE
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N, K;
int CNT2[MAXN], CNT5[MAXN];
ll DP[203][30 * MAXN];

int main() {
    rii(N, K);
    FOR(i, 0, N) {
        ll a; rl(a);
        while (a % 2 == 0) {
            a /= 2;
            ++CNT2[i];
        }
        while (a % 5 == 0) {
            a /= 5;
            ++CNT5[i];
        }
    }
    FOR(i, 0, 203) FOR(j, 0, 30 * MAXN) DP[i][j] = -1e18;
    DP[0][0] = 0;

    FOR(i, 0, N) ROF(j, K, -1) ROF(k, 27 * N - (K + CNT5[i]), -1) {
        DP[j + 1][k + CNT5[i]] = max(DP[j + 1][k + CNT5[i]], DP[j][k] + CNT2[i]);
    }
    ll ans = 0;
    FOR(i, 0, 30 * MAXN) ans = max(ans, min(DP[K][i], 1ll * i));
    printf("%lld\n", ans);
    return 0;
}
