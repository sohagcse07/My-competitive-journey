#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n;
  cin>>n;

  vector<int> v;


  for ( int i=0; i<n; i++ ){

  	int x;
  	cin>>x;

  	v.push_back(x);
  }

  sort(v.begin(),v.end());

  int q;
  cin>>q;

  while ( q-- ){

  	int day;
  	cin>>day;

  	int ans = upper_bound(v.begin(),v.end() , day ) - v.begin();

  	cout<< ans << endl;
  }








  return 0;
}