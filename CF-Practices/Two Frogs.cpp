#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int t;
  cin>>t;


  while (t--){

  	int n , a , b;

  	cin>>n>>a>>b;


  	int dif = abs( a - b ) - 1 ;

  	if ( dif % 2 ) cout<< "Yes\n";

  	else cout<< "NO\n";
  }








  return 0;
}