#include <bits/stdc++.h>
using namespace std;


int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int n;
  cin>>n;

  int a[n+1];


  for (int i=1; i<=n; i+=1) cin>>a[i];



  sort( a+1 , a+n );



	for (int i=1; i<=n; i+=1 ) cout<< a[i] << " ";

	cout<< endl;





  return 0;
}