#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long

using namespace std;
int main() {
    // 0/1 Knapsack problem
    ll n, k;
    cin >>n>>k;

    multiset<pair<int,int>>t;
    
    for(int i = 0;i < n; i++)
    {
        ll a, b;
        cin >>a>>b;
        t.insert({b,a});
    }
    auto itr = t.end();
    itr--;
    ll sum = 0;
    ll index = itr->second;
    ll cnt = 1;
    while(k--)
    {
        if(index != itr->second)
        {
            cnt++;
            index = itr->second;
        }
        sum+=itr->first;
        itr--;
    }
    ll vs = pow(cnt,2);
    ll ss = sum + vs;
    cout <<ss<<endl;
    return 0;
}