#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n , q;
  cin>>n >> q;


  vector<int> arr( n+2 , 0 );


  for (int i=1; i<=n; i++ ){

  	int x;
  	cin>>x;

  	arr[i] += x;
  	arr[i+1] -= x;
  }


  while ( q--) {

  	int l , r , x;

  	cin>> l >> r >> x;

  	arr[l] += x;

  	arr[r+1] -=x;
  }

  for (int i=1; i<=n; i++ ){

  	arr[i] += arr[i-1];

  	cout<< arr[i] << " ";
  }

  cout<< endl;










  return 0;
}