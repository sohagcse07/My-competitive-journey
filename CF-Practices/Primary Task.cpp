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
  	string s;
  	cin>>s;


	if(s[0] == '1' && s[1] == '0'&& (s[2] >='2' || (s[2] == '1' && s[3] >= '0'))){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}


  }








  return 0;
}