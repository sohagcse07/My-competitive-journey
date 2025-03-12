#include <bits/stdc++.h>
using namespace std;

//https://www.shafaetsplanet.com/?p=184
const int mx = 1002; // 1e3 er basi dibe na coplexity basi hobe

int adjMat[mx][mx];



int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n , m ; // node , edges

  cin>>n>>m;


  for(int i=1; i<=n; i++ ){

  	for(int j=1; j<=m; j++){

  		cin>>adjMat[i][j];
  	}
  }










  return 0;
}