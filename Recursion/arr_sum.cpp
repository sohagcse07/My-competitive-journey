#include <bits/stdc++.h>
using namespace std;


// sum( n-1 , a ) + a[n];


int sum ( int n , int a[] ){

	if ( n < 0 ) return 0;


	return sum ( n-1 , a ) + a[n];
}
// n(2) -> n(1 , )

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

  int a[n];


  for ( int i=0; i<n; i++ ){
  	cin>>a[i];
  }


  cout<< sum( n-1, a );

  








  return 0;
}