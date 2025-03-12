#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

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



  int n;
  cin>>n;

  for (int i=1; i<=n; i++ ){

  	cin>>a[i];
  }

  PreSum[0] = 0;

  for (int i=1; i<=n; i++ ){

  	PreSum[i] = PreSum[i-1] + a[i];
  }



  ll min_presum = 0;

  ll max_sub_arr = a[1];

  for (int i=1; i<=n; i++ ){

  	max_sub_arr = max ( max_sub_arr , (PreSum[i] - min_presum) );
  	min_presum = min ( min_presum , PreSum[i]);
  }


cout<< max_sub_arr << endl;



  return 0;
}