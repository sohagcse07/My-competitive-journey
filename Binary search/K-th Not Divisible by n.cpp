#include <bits/stdc++.h>
using namespace std;

long long n , k;

int isOK( long long id ){

	long long pos = id - id / n;

	if ( pos < k ) return 0;
	return 1;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--){

	  cin>>n>>k;

	  long long l = 0 , r = 2 *k + 1;

	  while ( l < r ){

	  	long long mid = (l+r)/2;

	  	if ( isOK( mid ) == 0 ){
	  		l = mid + 1;
	  	}else{
	  		r = mid;
	  	}
	  }

	  cout<< l  << endl;

 }





  return 0;
}