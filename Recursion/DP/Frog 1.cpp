#include <bits/stdc++.h>
using namespace std;


const int mx = 1e5+123;


int n , h[mx] , dp[mx];



int solve ( int i ){

	// base case 

	if ( i == n ) return 0;


	if ( dp[i] != -1 ) return dp[i];


	int cost1 = INT_MAX;
	int cost2 = INT_MAX;

	if ( i + 1 <= n ) cost1 = abs( h[i] - h[i+1]) + solve( i + 1 );

	if ( i + 2 <= n ) cost2 = abs ( h[i] - h[i+2] ) + solve( i + 2);

	
	dp[i] = min( cost1 , cost2);
	
	return dp[i] ;
}



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  memset( dp , -1 , sizeof( dp ));


  cin>>n;

  for (int i=1; i<=n; i++ ) cin>>h[i];

  cout<< solve(1) << endl;



  return 0;
}