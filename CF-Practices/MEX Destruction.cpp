#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int t;
  cin>>t;


  while ( t--) {


  	int n;
  	cin>>n;

  	vector<int> v(n);


  	for (int i=0; i<n; i++ ) cin>>v[i];


  	int sub_arrcnt = 0 ; bool f1 = 0;


  	for (int i=0; i<n; i++ ){


  		if ( v[i] != 0 && (!f1) ){ // v[1] = 1 

  			sub_arrcnt++;

  			f1 = 1;
  		}
  		if ( v[i] == 0 ){

  			f1 = 0; // f1 = 1
  		}

  	}

  	if ( sub_arrcnt >=2 ) cout << 2 << endl;
  	else cout << sub_arrcnt << endl;
  }







  return 0;
}