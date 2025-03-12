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

  	string s1,s2;
  	cin>>s1>>s2;

  	int bad = true;

  	//cout<<s1<<" " << s2<<endl;

  	//s1=000101
	//s2=111010

  	for(int i=1; i<=n; i++){
  		if(s1[i] == '1' && s2[i]=='1'){ // s1[i] = 1 , s2[i] = 0
  			bad = false; // 0 
  		}
  	} 

  	if(bad){
  		cout<<"yes\n";
  	}else{
  		cout<<"no\n";
  	}
  }








  return 0;
}