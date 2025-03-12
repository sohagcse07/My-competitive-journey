#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// b^3 + a^3 = x
// b^3 = x - a^3 // b^3 = y dorci
// y = x - a^3 
//  b ^ 3 < y = 0
// b ^ 3 >= 1

// 0 0 0 0 0 0  1 1 1 1 1

int isOK( ll id , ll y ){

	if ( id * id * id < y ) return 0;
	return 1;
}


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

  while ( t-- ){

  	ll x;;
  	cin>>x;

  	bool f1 = false;
  	for ( ll a = 1; a * a * a <= x; a++ ){

  		ll y = x - a * a * a;

  		ll l = 1 , r = 10000;

  		while(l<r){

  			ll mid =  ( l + r ) / 2;

  			if ( isOK( mid , y ) == 0 ) {

  				l = mid + 1;
  			}else{
  				r = mid;
  			}
  		}

  		if ( l * l * l == y ){

  			cout << "yes\n";
  			f1 = true;
  			break;
  		}
  	}

  	if (!f1){

  		cout << "no\n";
  	}
  }








  return 0;
}