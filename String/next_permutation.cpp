#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  string s;
  cin>>s;


  sort( s.begin() , s.end());


  while ( next_permutation( s.begin( ), s.end())){

  	cout << s << endl;
  }








  return 0;
}