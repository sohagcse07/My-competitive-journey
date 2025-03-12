#include <bits/stdc++.h>
using namespace std;


//https://www.spoj.com/problems/MATHLOVE/
int isOK ( int id, int n ){

	int val = (id * ( id + 1 )/2);

	if ( val < n ) return 0;
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

  	long long n;
  	cin>>n;

  	int l = 0 , r =  n , ans = -1;

  	while ( l <=r ){

  		int mid = ( l + r ) / 2;

  		int sum = mid * ( mid + 1 )/2;

  		if ( sum == n ){

  			ans = mid;
  			break;
  		}else if ( sum < n ){

  			l = mid + 1;
  		}
  		else{

  			r = mid - 1;
  		}
  	}

  	//int ans = l * ( l + 1 ) / 2;

  	if ( ans != -1  ) cout << ans << endl;
  	else cout << "NAI\n";

  }







  return 0;
}