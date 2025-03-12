#include <bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  
  int t;
  cin>>t;

  while(t--){

  	int n;
  	cin>>n;

  	long long multi = 1 ;

  	for(int i=0; i<n; i++){
  		int x;
  		cin>>x;

  		multi = multi * x;
  	}


	int digit = multi%10;

  	if(digit==2 || digit == 3 || digit == 5){
  		cout<<"YES\n";
  	}else{
  		cout<<"NO\n";
  	}



  }



  








  return 0;
}