#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const int mx = 1e4+123;

ll dp[22][mx];

int coin[22];

ll solve(int i, int n){

	if( i == 21 || n == 0) return (n == 0);

	if(dp[i][n] != -1) return dp[i][n];


	ll ret = 0;

	for(int j=0; j<=n; j++){
		if( n - ( j * coin[i] >= 0)){
			ret += solve(i+1 , n - (j * coin[i]));
		}
		else break;
	}

	return dp[i][n] = ret;
}
// time complexity is 3*10^7
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  for(int i=1; i<=21; i++){
  	coin[i-1] = i*i*i;
  }

  memset(dp, -1 , sizeof(dp));

  int n;

  while(cin>>n){

  	cout<<solve(0,1)<<endl;
  }








  return 0;
}