#include <bits/stdc++.h>
using namespace std;

const int mx = 3e4+123;

bool dfs ( int current , int t , vector<int> &a , vector<bool> &vis ){

	if ( current == t ) return true;


	if ( current > t || vis[current] ) return false;


	vis[current] = true;


	return dfs ( current + a[current] , t , a ,vis );
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n , t;

  cin>>n>>t;

  vector<int> a(n);

  for(int i=1; i<n; i++ ){
  	cin>>a[i];
  }


  vector<bool> vis(n , false);


  if ( dfs(1 , t , a ,  vis )){

  	cout<<"Yes\n";
  }else{

  	cout<<"NO\n";
  }




  return 0;
}