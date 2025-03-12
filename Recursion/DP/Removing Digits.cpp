#include <bits/stdc++.h>
using namespace std;

//https://cses.fi/problemset/task/1637/

const int mx = 1e6+23;

int dp[mx];


int max_digit ( int n ){ /// not use this problem

	
	int max_d = 0;

	while ( n > 0 ){

		max_d = max ( max_d , n % 10 );

		n /= 10;

	}

	return max_d;
}

int solve ( int n ){

	if ( n == 0 ) return 0;


	if ( dp[n] != -1 ) return dp[n];

	int ans = INT_MAX;

	int temp = n;

	while ( temp > 0 ){

		int digit = temp % 10;


		if ( digit > 0 ){

			ans = min ( ans , 1 + solve ( n - digit ));
		}

		temp /= 10;
	}


	dp[n] = ans;

	return dp[n] ;;

}

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

  cout<< solve(n) << endl;



  return 0;
}