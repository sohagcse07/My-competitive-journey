#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4+12;

int dp[mx];

int a[mx];

int solve (int i){

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

  while(t--){

  	int n;
  	cin>>n;

  	int a[n+12];


  	int cnt1 = 0 , cnt2 = 0;

  	for(int i=0; i<n; i++){
  		int x;
  		cin>>x;

  		if( x == 1) cnt1++; //2
  		if( x == 2) cnt2++; // 2
  	}

  	if( cnt1+2 * cnt2 & 1 ){ // 2 * 6 = 6 
  		cout<<"NO\n";
  	}else{

  		int sum = (cnt1+2 * cnt2) / 2; // 2 * 3 = 6 / 2 = 3

  		if( sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)){ // F || T
  			cout<<"yes\n"; // excute code
  		}else{
  			cout<<"no\n";
  		}
  	}

  	
  }








  return 0;
}