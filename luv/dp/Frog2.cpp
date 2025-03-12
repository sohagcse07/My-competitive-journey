#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;

int dp[mx],n,h[mx],k;


int solve (int i){

	if ( i == 0 ) return 0;

	if( dp[i] != -1 ) return dp[i];

	int cost = INT_MAX;

	// way k 
	for(int j=1; j<=k; j++){

		if( i - j >= 0 ){

			cost = min( cost , solve(i-j) + abs(h[i] - h[i-j]));
		}
	}

	return dp[i] = cost;
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  memset(dp, -1 , sizeof(dp));

  cin>>n>>k;

  for(int i=0; i<n; i++){
  	cin>>h[i];
  }

  cout<<solve(n-1)<<endl;







  return 0;
}