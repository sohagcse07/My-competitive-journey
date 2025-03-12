#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);



  int t;
  cin>>t;

  while ( t-- ){

  	int n;

  	cin>>n;

  	cout<< 2 << " " << 3  << " " ;

  	int x = 2;

  	for (int i=3; i<=n; i++ ){

  		cout << i * 1 + x << " ";
  		x++;
  	}


  	cout << endl;


  }








  return 0;
}