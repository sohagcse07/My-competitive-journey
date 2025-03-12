#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+12;


int n,h[mx];

int dp[mx];


int solve(int i){

	if ( i == 0 ) return 0;

	if(dp[i] != -1 ) return dp[i];

	int cost = INT_MAX;

	// way 1 jump 1 kore kortece
	cost = min( cost , solve(i-1) + abs(h[i] - h[i-1]));

	//way 2 jump 2 kore kortece
	if(i > 1)
	cost = min (cost , solve(i-2) + abs(h[i] - h[i-2]));

	return dp[i] = cost ;
}


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  memset(dp, -1 , sizeof(dp));
  
  cin>>n;

  for(int i=0; i<n; i++){
  	cin>>h[i];
  }


  cout<<solve(n-1)<<endl;  // zero bass so n-1

/*
4
10 30 40 20
//
30
*/








  return 0;
}