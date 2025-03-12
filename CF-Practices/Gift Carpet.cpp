#include <bits/stdc++.h>
using namespace std;


void solve (){

	int n,m;

	cin>>n>>m;

	vector<string> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}


	string name = "vika";

	int cnt = 0;

	

	for(int i=0; i<n; i++){
		bool f1 = false;
		for(int j=0; j<m; j++){

			if(v[j][i] == name[cnt]){
				f1 = true;
			}
		}

		if(f1){
			cnt++;
			if(cnt == 4) break;
		}
	}

	if(cnt == 4) cout<<"yes\n";
	else cout<<"NO\n";
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

  	int n,m;
  	cin>>n>>m;

  	vector<string> cap(n);

  	for(int i=0; i<n; i++){
  		cin>>cap[i];
  	}


  	string name = "vika";

  	int cnt = 0;

  	for(int i=0; i<m; i++){
  		bool ok = 0;
  		for(int j = 0; j < n; j++){

  			if( cap[j][i] == name[cnt]){
  				ok = 1;
  			}
  		}

  		if(ok){
  			cnt++;

  			if( cnt == 4) break;
  		}
  	}

  	if(cnt == 4){
  		cout<<"yes\n";
  	}else{
  		cout<<"no\n";
  	}
  }








  return 0;
}