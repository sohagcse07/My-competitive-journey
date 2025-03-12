#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second
#define pb push_back

//https://cses.fi/problemset/task/1619
int32_t main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> v;  // লেফট-রাইট পয়েন্ট স্টোর করার জন্য

  set<int> st;  // ইউনিক পয়েন্ট সংরক্ষণ (Coordinate Compression এর জন্য)

  // 🔹 ইনপুট নেওয়া এবং ইউনিক পয়েন্ট সংগ্রহ করা
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    v.pb({l, r});
    st.insert(l);
    st.insert(r);
  }

  // 🔹 Coordinate Compression: ছোট ইনডেক্সে ম্যাপ করা
  map<int, int> mp;
  int cnt = 1;

  for (auto u : st) {
    mp[u] = cnt++;  // প্রতিটি ইউনিক ভ্যালুকে ছোট সংখ্যা দিয়ে রিপ্লেস করছি
  }

  // 🔹 আপডেট করা নতুন কমপ্রেসড ইনডেক্স দিয়ে
  for (int i = 0; i < v.size(); i++) {
    v[i].first = mp[v[i].first];  // নতুন ইনডেক্স দেওয়া
    v[i].second = mp[v[i].second];
  }

  int arr[2 * n + 4] = {0};  // 🔹 Difference Array

  // 🔹 লেফট পয়েন্টে +1, রাইট পয়েন্টে -1
  for (auto u : v) {
    arr[u.first]++;    // ইভেন্ট শুরু হলে +1
    arr[u.second]--;   // ইভেন্ট শেষ হলে -1
  }

  int mx = 0;

  // 🔹 Prefix Sum নিয়ে সর্বোচ্চ ওভারল্যাপ খুঁজছি
  for (int i = 1; i <= 2 * n; i++) {
    arr[i] += arr[i - 1];  // Prefix Sum
    mx = max(mx, arr[i]);  // সর্বোচ্চ মান আপডেট করছি
  }

  cout << mx << endl;  // 🔹 সর্বোচ্চ কতগুলো ইভেন্ট একসাথে চলছে সেটা প্রিন্ট

  

  return 0;
}