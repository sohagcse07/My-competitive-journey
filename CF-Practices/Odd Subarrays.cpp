#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int mx = 1e5+12;

int a[mx];

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

  	for(int i=1; i<=n; i++){
  		cin>>a[i];
  	}


  	int mx_val = 0;
  	int cnt = 0;

  	for(int i=1; i<=n; i++){

  		if( mx_val > a[i]){
  			mx_val = 0;
  			cnt++;
  		}else{

  			mx_val = max( mx_val , a[i]);
  		}
  	}

  	cout<<cnt<<endl;
  }





  return 0;
}