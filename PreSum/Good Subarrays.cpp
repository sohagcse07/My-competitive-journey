#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int32_t main() {
	
  // For local debugging (Redirect input/output to files)
  #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
  #endif

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t; // Read the number of test cases

  while (t--) {
    int n;
    cin >> n; // Read the length of the number string

    int p[n + 5]; // Prefix sum array

    p[0] = 0; // Initialize prefix sum to 0

    // Construct the prefix sum array
    for (int i = 1; i <= n; i++) {
      char c;
      cin >> c; // Read each digit as a character
      int d = c - '0'; // Convert character to integer
      p[i] = p[i - 1] + d; // Store cumulative sum
    }

    map<long long, int> cnt; // HashMap to store prefix difference frequencies

    long long ans = 0; // Variable to store the final result

    // Main logic: Count valid subarrays based on (p[i] - i)
    for (int i = 0; i <= n; i++) {
      int diff = (p[i] - i); // Compute the difference

      ans += cnt[diff]; // If this difference appeared before, add its count to answer
      
      cnt[diff]++; // Increase the count of this difference
    }

    cout << ans << endl; // Output the result
  }
/*
3
3
120
5
11011
6
600005
//
3 
6 
1
*/

  return 0;
}
