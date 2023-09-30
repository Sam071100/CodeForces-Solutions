#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        
        // Precompute the prefix bitwise AND for array 'a'
        vector<int> prefix_and(n);
        prefix_and[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefix_and[i] = a[i] & prefix_and[i - 1];
        }
        
        while (q--) {
            int l, k;
            cin >> l >> k;
            l--; // Convert to 0-based index
            
            int low = l, high = n - 1, result = -1;
            
            // Binary search to find the maximum 'r'
            while (low <= high) {
                int mid = (low + high) / 2;
                if ((l == 0 && prefix_and[mid] >= k) || (prefix_and[mid] >= k && prefix_and[mid - 1] < k)) {
                    result = mid;
                    break;
                }
                if (prefix_and[mid] >= k) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            
            cout << result + 1 << " "; // Convert back to 1-based index and print the result
        }
        cout << "\n";
    }
    return 0;
}
