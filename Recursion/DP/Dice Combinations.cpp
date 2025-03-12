#include <bits/stdc++.h>
using namespace std;

//https://cses.fi/problemset/task/1633
int n;

vector<int> coins = { 1 , 2 , 3 , 4 , 5 , 6};

const int mx = 1e6+123;

#define mod 1000000007;

int dp[mx];

int solve ( int sum ){

	// base case 
	if ( sum == 0 ) return 1;


	if ( dp[sum] != -1 ) return dp[sum];

	int way = 0;


	for ( auto u:coins ){

		if ( sum >= u ){

			way += solve ( sum - u );
			way %= mod;
		}
	}

/*
	for ( int i=1; i<=6; i++ ){

		if ( sum >=  i){
			way += solve( sum - i );

			way %= mod;
		}
		
	}
*/
	return dp[sum] = way ;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  memset ( dp , -1 , sizeof(dp) );

  cin>>n;

  cout<< solve(n) << endl;


  return 0;
}