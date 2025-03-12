#include <bits/stdc++.h>
using namespace std;

//https://atcoder.jp/contests/dp/submissions/me
const int mx = 1e5+123;

long long dp[123][mx];

int p[123],w[123]; // price and weight

int n , sz; // sz = size of bag

long long solve (int i , int curW){ // indx ,curenteWeight

  if( i > n) return 0; // last indx = (5,0) 

  if(dp[i][curW] != -1 ) return dp[i][curW]; /// je gola calculate kora ace 
  // se gola are calculate korteci na ei khane store kora ace ei khan thake 
  // niya nitaci


  long long ret1 = 0 , ret2 = 0; // nibo = 1 , nibo na = 0

  if( w[i]+curW <= sz ) ret1 = p[i] + solve (i+1, w[i]+curW); // price gola nitaci 
  // and weight gola update korteci // nibo = 1

  ret2 = solve (i+1,curW); // je weight ta aci eita e niya jaitaci 
  // nibo na = 0;

  return dp[i][curW] = max(ret1,ret2); // store and max valu ta return

}



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  cin>>n>>sz;

  for(int i=1; i<=n; i++){

    cin>>w[i]>>p[i];
  }


  memset(dp,-1,sizeof(dp));



  cout<<solve(1,0)<<endl;









  return 0;
}