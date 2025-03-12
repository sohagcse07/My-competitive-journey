#include <bits/stdc++.h>
using namespace std;


vector<int> arrr ( int n ,int a , int b , int c ){


	vector<int> ar;

	ar.push_back(a);

	int cutent = a;

	int valu[] = { a , b , c };

	for ( int i=1; i<n; i++ ){

		cutent +=valu[i % 3 ];

		ar.push_back(cutent);
	}

	return ar;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  
  int n , a , b , c;
  cin>>n>>a>>b>>c;


  vector<int> vec =  arrr(  n ,a , b , c);



  for ( auto &x :vec ) {

  	cout << x << " ";
  }






  return 0;
}