#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
// 0 1 1 2 3 5 8 

// n = 6

int dp[mx];

int fibo (int n){

	if(n == 0) return 0;

	if( n == 1) return 1;

	if( dp[n] != -1) return dp[n];

	return dp[n] =  fibo(n-1) + fibo(n-2);
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

	
  memset(dp,-1,sizeof(dp));

  int n;
  cin>>n;

  cout<<fibo(n)<<endl;

  



  return 0;
}