#include <bits/stdc++.h>
using namespace std;


const int mx = 1e5+12;

vector<int> coins = { 5 , 12 , 23 }; // ei coin gola use kore N ke banate hobe


int dp[mx];

bool IsPossiable ( int n ){

	if ( n < 0 ) return 0 ; // base case jodi mainus kore negetive valu pai ei khane theke ret korbe

	if ( n == 0 ) return 1;


	if ( dp[n] != -1 ) return dp[n];

	int res = 0;

	for ( auto u:coins ){

		if ( IsPossiable ( n - u )) res =  1;
	}
	/*
	if ( IsPossiable ( n - coins[0] )) return 1; // 5 minus korte parteci so True

	if ( IsPossiable ( n - coins[1] )) return 1; // 12 minus korte parteci so True

	if ( IsPossiable ( n - coins[2] )) return 1; // 23 minus korte parteci so True
	*/

	// else 
	return dp[n] = res;;
}


// dp use korle complexity is : O( n * m ) 
// without dp complexity is : O( n ^ m )

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  memset( dp , -1 , sizeof(dp));

  int n;
  cin>>n;
  cout<< IsPossiable( n );

  return 0;
}