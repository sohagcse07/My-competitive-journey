#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int mx = 2e3+123;

int dp[mx][mx],n,k;; // indx , k 



struct info {

	int i , c , ans; // indx , cost , high digit

	info (){}
	info(int i, int c, int ans): i(i), c(c), ans(ans){}

} dir[mx][mx]; // diraction arr high digit ta naber jono

string s[] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

string arr_s[mx];

int GetVal(string s1 , string s2){

	int cnt = 0;

	for(int i=0; i<s1.size(); i++){

		if( s1[i] == '0' && s2[i] == '1') return -1; // s2 input e dice 1 so ami 0 banite parmo na

		if( s1[i] == '1' && s2[i] == '0') cnt++; // s2 input dice 0 ami 1 banaite parmo so cnt++
	}

	return cnt;
}


int solve(int i , int cost){

	if( i == n) return ( cost == k); // T F , 0,1

	if(dp[i][cost] != -1) return dp[i][cost];


	int ret = 0;

	for(int j=9; j>=0; j--){

		int cur_cost = GetVal(s[j] , arr_s[i]);

		if( cur_cost == -1 ) continue;

		if( cost + cur_cost <= k){

			int d = solve( i+1 , cost + cur_cost);

			if( d == 1){
				ret = 1;

				dir[i][cost] = info(i+1, cost+cur_cost, j); // high digit nite boltaci
				break;
			}
		}
	}

	return dp[i][cost] = ret;
}

void print(int i , int c){

	if(dir[i][c].ans == -1 ) return;

	cout<<dir[i][c].ans;

	print(dir[i][c].i ,dir[i][c].c); // direction arr te ami save 
	// kore rakci indx koto nite hobe , high cost and , high digit

	// like kono ekta digit er left e jodi 9 take ei digit ta sob caite boro hobe
	// 97, 91, 93, so..on
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  cin>>n>>k;

  for(int i=0; i<n; i++){
  	cin>>arr_s[i];
  }

  for(int i=0; i<mx; i++){
  	for(int j=0; j<mx; j++){

  		dir[i][j] = info(-1,-1,-1); // as like memset
  	}
  }

  memset(dp,-1,sizeof(dp));


  if(solve(0,0) == 1){

  	print(0, 0);
  }

  else cout<< "-1";


  cout<<endl;




  return 0;
}