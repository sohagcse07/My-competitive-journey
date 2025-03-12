#include <bits/stdc++.h>
using namespace std;


void fun1 ( int n ){

	fun1( n- 1 ); // inf colbe 
}

void fun ( int n ){

	if ( n == 0 )return; // base condition

	cout << n << endl;

	fun ( n - 1 );
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  fun(5);








  return 0;
}