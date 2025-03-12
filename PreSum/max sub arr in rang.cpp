#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'

const int mx = 1e5+123;

ll a[mx];

ll PreSum[mx];

int32_t main() {
  #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  int n;
  cin>>n;

  for (int i=1; i<=n; i++ ) cin>>a[i];


  for (int i=1; i<=n; i++ ){

  	PreSum[i] = PreSum[i-1] + a[i];
  }

  ll min_prefix_sum = 0; 

  ll min_prefix_sum_indx = 0;

  ll mx_subarr = a[1];

  int l = 1 , r = 1;


  for (int i=1; i<=n; i++ ){

  	ll currt_max =  ( PreSum[i] - min_prefix_sum );

  	if ( currt_max > mx_subarr ){

  		mx_subarr = currt_max;

  		r = i;
  		l = min_prefix_sum_indx + 1;
  	}

  	if ( PreSum[i] < min_prefix_sum ){

  		min_prefix_sum = PreSum[i];

  		min_prefix_sum_indx = i;
  	}
  }




  cout<< mx_subarr << " " << l << " " << r <<endl;




  return 0;
}
