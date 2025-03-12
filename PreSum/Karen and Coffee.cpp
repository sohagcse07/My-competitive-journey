#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

const int mx = 200000 + 7; // Maximum temperature value plus extra buffer

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k, q;
  cin >> n >> k >> q;

  vector<int> cnt(mx, 0); // Stores the difference array for temperature ranges

  // Reading recipe temperature ranges and marking start/end in cnt array
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    cnt[l]++;      // Increment at the start of the range
    cnt[r + 1]--;  // Decrement right after the end of the range
  }

  vector<int> PreSum(mx, 0); // Stores prefix sum of cnt to get actual frequency

  // Constructing the prefix sum to determine the count of recipes for each temp
  for (int i = 1; i < mx; i++) {
    PreSum[i] = PreSum[i - 1] + cnt[i];
  }

  vector<int> valid(mx, 0); // Stores 1 if the temperature is admissible, 0 otherwise

  // Marking valid temperatures that appear in at least k recipes
  for (int i = 1; i < mx; i++) {
    valid[i] = (PreSum[i] >= k ? 1 : 0);
  }

  vector<int> valid_PreSum(mx, 0); // Prefix sum of valid temperatures

  // Constructing prefix sum for valid temperatures to enable fast range queries
  for (int i = 1; i < mx; i++) {
    valid_PreSum[i] = valid_PreSum[i - 1] + valid[i];
  }

  // Processing queries
  while (q--) {
    int l, r;
    cin >> l >> r;
    // Output the number of admissible temperatures in the range [l, r]
    cout << valid_PreSum[r] - valid_PreSum[l - 1] << endl;
  }

  /*
  Below is an alternative commented-out approach for compression using coordinate mapping

  int n , k , q;

  cin>> n >> k >> q;

  vector<pair<int,int>> v;
  vector<pair<int,int>> queris;
  vector<int> all_valu;

  // Storing intervals and collecting all temperature values
  for (int i=0; i<n; i++){
    int l , r;
    cin>>l>>r;
    v.push_back({l,r});
    all_valu.push_back(l);
    all_valu.push_back(r);
  }

  // Storing query ranges and collecting query values
  for (int i=0; i<q; i++ ){
    int l , r ;
    cin>> l >> r;
    queris[i] = {l , r };
    all_valu.push_back(l);
    all_valu.push_back(r);
  }

  vector<int> sorted_val = all_valu;
  sort(sorted_val.begin(),sorted_val.end());

  map<int,int> mp;

  // Assigning compressed values to all unique temperature values
  for (int i=0; i<all_valu.size(); i++ ){
    mp[all_valu[i]] = i+1;
  }

  // Replacing the original temperature values in intervals with their compressed values
  for (int i=0; i<n; i++){
    v[i].first = mp[v[i].first];
    v[i].second = mp[v[i].second];
  }

  // Replacing the original temperature values in queries with their compressed values
  for (int i=0; i<q; i++){
    queris[i].first = mp[queris[i].first];
    queris[i].first = mp[queris[i].first];
  }

  map<int,int> freq;
  */

  return 0;
}
