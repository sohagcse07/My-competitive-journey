#include <bits/stdc++.h>
using namespace std;


const int mx = 100;


int fact ( int n ){

	if ( n == 0 ) return 1;

	long long ans = fact( n - 1 ) * n;

	return ans; 
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int n;
  cin>>n;

  int ans = 1;

  for (int i=1; i<=n; i++ ){

    ans *=i;
  }

  cout<<ans<<endl;

  cout<<fact(n)<<endl;



  return 0;
}