#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int mx = 3e4+123;


int coin[] = {1, 5, 10, 25, 50}; // ei coin gola diya N banamo 
// like (5*2 + 1*1) = 11 n = 11 ans

ll dp[6][mx]; //coin , and coin er sume

ll solve( int i , int n){ // i = coin er indx , n = sum of coin

	if( i == 5 || n == 0) return ( n == 0);
	// last coin || sum == 0     //n == 0 ret korbe

	if( dp[i][n] != -1 ) return dp[i][n];
	// memoraization

	ll ret = 0;

	for(int j=0; j<=n; j++){

		if( n - (j*coin[i]) >= 0) ret += solve(i+1 , n - (j*coin[i]));
		// je coin ta nitaci et - korte korte jate - balu na day so >= 0
		else break;
	}

	return dp[i][n] = ret;

}
// time com:

/*

[6]*[mx]*n // n == 3e4 // mx = 3e4

// 6*3*10^4 * 3*10^4 = 54*10^8 all most 5*10^9

ja 1s e AC hobe na but ei khane constructor factor er jono 
complexity kobe jabe so wast case hisab kore o 

constructor gola hisab kora dorkar 
*/

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  memset(dp,-1,sizeof(dp));

  int n;

  while(cin>>n){
  	  //memset(dp,-1,sizeof(dp)); eta ei khane use korle TLE khabo 
  	// karon potek tast case er jono ami mem clear korteci 
			ll y = solve ( 0, n );
      if ( y == 1 ) cout<<"There is only 1 way to produce "<<n<<" cents change.\n";
      else cout<<"There are "<<y<<" ways to produce "<<n<<" cents change.\n";
  }








  return 0;
}