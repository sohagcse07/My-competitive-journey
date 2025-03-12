#include <bits/stdc++.h>
using namespace std;


// int arr = { 1 , 10 , 50 , 56 , 60 , 67 .....10000};
vector<int> arr = { 56 , 50 , 10 , 5 , 60 , 67 ,100000}; // arr ta sort na and 
// arr ta flip hoya gece amer min number indx bar korte hobe logeN e 

int isOK ( int id ){

	if ( arr[id] < arr[0]) return 0;
	else return 1;
}
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n = arr.size();

  int l = 0 , r = n;

  while ( l < r ){

  	int mid = ( l + r ) / 2;

  	if ( isOK ( mid ) == 0 ) l = mid + 1 ;
  	else r = mid;
  }

  int ans = l -1;

  cout << ans << endl; // ans is : 3 min indx is 3 = 5








  return 0;
}