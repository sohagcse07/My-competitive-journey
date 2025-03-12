#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
ll a , b , c , k;

int isOK( long long x ){

	if ( a * x * x + b * x + c < k ) return 0;
	else return 1;
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

  while (t--){

  	cin>>a>>b>>c>>k;

  	int l =  0 , r = 1e5;

  	while ( l < r ){

  		int mid = ( l + r )/2;

  		if ( isOK( mid ) == 0 ){

  			l = mid + 1;
  		}else{

  			r = mid;
  		}
  	}

  	cout << l << endl;
  }








  return 0;
}