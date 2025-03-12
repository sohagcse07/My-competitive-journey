#include <bits/stdc++.h>
using namespace std;

const int mx = 2e5+123;

int a[mx];

void solve(){
	int n;
  	cin>>n;

  	long long sum = 0;
  	for(int i=0; i<n; i++){
		cin>>a[i];
		sum +=a[i];
  	}

  	int req = sum/n;

  	int more = 0;

  	for(int i=0; i<n; i++){

  		if(a[i] + more < req){
  			cout<<"no\n";
  			return;
  		}else{

  			a[i] += more;

  			more = a[i] - req;
  		}
  	}

  	cout<<"yes\n";

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
  	solve();
  }








  return 0;
}