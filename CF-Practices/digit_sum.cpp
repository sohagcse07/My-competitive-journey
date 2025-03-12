#include <bits/stdc++.h>
using namespace std;


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
  	int n;
  	cin>>n;

  	int a = n%10;
  	int b = n/10;

  	cout<<a+b<<endl;
  }








  return 0;
}