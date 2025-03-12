#include <bits/stdc++.h>
using namespace std;


void print ( vector<int> &v , int n ){

	for (int i=0; i<n; i++ )cout << v[i] << " ";

	cout << endl;
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

  vector<int> v(n);


  for (int i=0; i<n; i++ ){

  	cin>>v[i];

  }


  while( next_permutation( v.begin() , v.end())){

  	print( v , n );

  }








  return 0;
}