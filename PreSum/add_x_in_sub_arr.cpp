#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int mx = 1e5+123;

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 2, 0);  // Difference array initialized with 0

    // Processing queries
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;

        arr[l] += x;    // Adding x at position l
        arr[r + 1] -= x; // Subtracting x at position r+1 to remove effect after r
    }

    // Applying Prefix Sum to get the final array values
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];  // Accumulate previous value to current index
        cout << arr[i] << " ";  // Print the updated value
    }
    
    cout << endl;


    
    return 0;
}
