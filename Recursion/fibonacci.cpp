#include <bits/stdc++.h>
using namespace std;


int fibo ( int n ){

	if ( n == 0 || n == 1 ) return n;


	long long ans = fibo( n -1 ) + fibo ( n - 2 );

	return ans ;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n;
  cin>>n;


  cout << fibo( n ) << endl;








  return 0;
}