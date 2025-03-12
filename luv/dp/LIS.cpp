#include <bits/stdc++.h>
using namespace std;

const int mx = 25e2+23;

int a[mx];
int dp[mx];

int lis (int i){

	if(dp[i] != -1) return dp[i];

	int ans = 1; 

	for(int j=0; j<i; j++){

		if( a[i] > a[j]){

			ans = max(ans , lis(j)+1);
		}
	}

	return dp[i] = ans;
}



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n;
  cin>>n;

  for(int i=0; i<n; i++){
  	cin>>a[i];
  }


  int ans = 0;

  for(int i=0; i<n; i++){

  	ans = max(ans , lis(i));
  }


  cout<<ans<<endl;






  return 0;
}