#include <bits/stdc++.h>
using namespace std;

int arr[] = { 1 , 2 , 2 , 3 , 3 , 4 , 6 , 8};
//int arr1[] = { 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1}; //3 coto 0 and 3 boro 1


int isOK ( int id , int x ){

	if ( arr[id] < x ) return 0;

	else return 1;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n ;
  cin>>n;

  int l = 0 , r = n;

  int x;
  cin>>x;

  while ( l < r ){

  	int mid = ( l + r ) / 2;

  	//if ( arr1[mid] == 0 ) l = mid + 1;

  	if ( isOK(mid , x ) == 0 ) l = mid + 1;

  	else r = mid ;
  }


  //int ans0  = l - 1; // lowerbound
  int ans1 = l ; // upperbound


  // cout<< ans0 << " " << ans1 << endl;
  cout<< ans1 << endl;





  return 0;
}