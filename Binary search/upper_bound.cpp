#include <bits/stdc++.h>
using namespace std;


const int mx = 1e5+123;

int a[mx];

// kono ekt  arr upperbound holo sobro max index jekhane x ke insert korle 
// arr ta sort thake 
// like 3 4 5 6 6 8 ei arr er x = 5 er upperbound is 3 number idexx
//      0 1 2 3 4 5 idx
// like 3 4 5 5 6 6 8 sorted arr

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n , x;
  cin>>n>>x;


  for (int i=0; i<n; i++ ) cin>>a[i];

  int upper = n;

  int l = 0 , r = n -1 ;


  while ( l <= r ){


  	int mid = ( r + l ) >> 1;


  	if ( a[mid] > x ){

  		upper = mid;

  		r = mid - 1;
  	}else{

  		l = mid + 1 ;
  	}

  }

 
  cout << upper << endl;








  return 0;
}

