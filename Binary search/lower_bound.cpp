#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;

int a[mx];


// kono ekt  arr lowerbound holo sobro ninmo index jekhane x ke insert korle 
// arr ta sort thake 
// like 3 4 5 6 6 8 ei arr er x = 5 er lowerbound is 2 number idexx
//      0 1 2 3 4 5
// like 3 4 5 5 6 6 8 sorted arr

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  int n , x ;
  cin>>n>>x;


  for (int i=0; i<n; i++ ) cin>>a[i];



  int l = 0 , r = n -1 ;
	
  int low = -1 ;

  while ( l <= r ){

  	int mid = ( r + l ) >> 1;


  	if ( a[mid] >= x ){

  		low = mid;

  		r = mid - 1;
  	}else{

  		l = mid + 1;
  	}
  }


  if ( low == -1 ) low = n;

  cout << low << endl;

/*
5. Number of values smaller than x = lo
6. Number of values greater or equal to x = n - lo
7. Number of values less than or equal to x = up
8. Number of values greater than x = n - up
*/









  return 0;
}