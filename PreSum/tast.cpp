#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MAX_TEMP = 200000 + 5;  // Max temperature range

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> cnt(MAX_TEMP, 0);

    // Step 1: Mark temperature ranges using difference array
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }

    // Step 2: Compute prefix sum to get frequency of each temperature
    vector<int> presum(MAX_TEMP, 0);
    for (int i = 1; i < MAX_TEMP; i++) {
        presum[i] = presum[i - 1] + cnt[i];
    }

    // Step 3: Mark valid temperatures where at least k recipes recommend
    vector<int> valid(MAX_TEMP, 0);
    for (int i = 1; i < MAX_TEMP; i++) {
        valid[i] = (presum[i] >= k ? 1 : 0);
    }

    // Step 4: Compute prefix sum of valid temperatures
    vector<int> validPresum(MAX_TEMP, 0);
    for (int i = 1; i < MAX_TEMP; i++) {
        validPresum[i] = validPresum[i - 1] + valid[i];
    }

    // Step 5: Answer queries efficiently
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << validPresum[b] - validPresum[a - 1] << endl;
    }

    return 0;
}
