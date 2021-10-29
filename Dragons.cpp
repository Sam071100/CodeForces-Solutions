#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int s,n;
    cin>>s>>n;
    
    vector<pair<int, int>> xs_yb;
    
    while(n>0) {
        int xi,yi;
        cin>>xi>>yi;
        xs_yb.push_back(make_pair(xi, yi));
        n--;
    }
    
    sort(xs_yb.begin(), xs_yb.end());
    for(int index=0;index<xs_yb.size();index++) {
        if (s>xs_yb[index].first) {
            s+=xs_yb[index].second;
        }
        else {
            cout<<"NO"<<'\n';
            return 0;
        }
    }
    
    cout<<"YES"<<'\n';

    return 0;
}
